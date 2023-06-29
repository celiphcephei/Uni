library("seqinr")
library("ape")
library("Biostrings")
library("DECIPHER")
library("ade4")
library("viridis")

# PRIMERA EVIDENCIA

getwd()

setwd("C:/Users/renat/Documents/Rarchivos/Proyecto")

#Genomas de coronavirus de cada pais

# Coronavirus JAPON
#jpn <- read.GenBank("OQ804217.1")
jpn_fasta<- read.fasta("jpn.fasta")
jpn_sequence <- jpn_fasta[[1]]
jpn_size <- length(jpn_sequence)
jpn_count <- count(jpn_sequence, 1)
jpn_gc <- GC(jpn_sequence)
jpn_tabla <- c("OQ804217.1", jpn_size, jpn_gc)

# Coronavirus USA
#usa <- read.GenBank("OQ891051.1")
usa_fasta<- read.fasta("usa.fasta")
usa_sequence <- usa_fasta[[1]]
usa_size <- length(usa_sequence)
usa_count <- count(usa_sequence, 1)
usa_gc <- GC(usa_sequence)
usa_tabla <- c("OQ891051.1", usa_size, usa_gc)

# Coronavirus MEXICO
#mex <- read.GenBank("OM060237.1")
mex_fasta<- read.fasta("mex.fasta")
mex_sequence <- mex_fasta[[1]]
mex_size <- length(mex_sequence)
mex_count <- count(mex_sequence, 1)
mex_gc <- GC(mex_sequence)
mex_tabla <- c("OM060237.1", mex_size, mex_gc)

# Coronavirus CHINA
#chn <- read.GenBank("OQ653373.1")
chn_fasta<- read.fasta("chn.fasta")
chn_sequence <- chn_fasta[[1]]
chn_size <- length(chn_sequence)
chn_count <- count(chn_sequence, 1)
chn_gc <- GC(chn_sequence)
chn_tabla <- c("OQ653373.1", chn_size, chn_gc)

# Coronavirus PERU
#ind <- read.GenBank("MT263074.1")
per_fasta<- read.fasta("per.fasta")
per_sequence <- per_fasta[[1]]
per_size <- length(per_sequence)
per_count <- count(per_sequence, 1)
per_gc <- GC(per_sequence)
per_tabla <- c("MT263074.1", per_size, per_gc)

# Coronavirus RUSIA
#rus <- read.GenBank("MW305251.1")
rus_fasta<- read.fasta("rus.fasta")
rus_sequence <- rus_fasta[[1]]
rus_size <- length(rus_sequence)
rus_count <- count(rus_sequence, 1)
rus_gc <- GC(rus_sequence)
rus_tabla <- c("MW305251.1", rus_size, rus_gc)

# Coronavirus CHILE
#chl <- read.GenBank("MW064264.1")
chl_fasta<- read.fasta("chl.fasta")
chl_sequence <- chl_fasta[[1]]
chl_size <- length(chl_sequence)
chl_count <- count(chl_sequence, 1)
chl_gc <- GC(chl_sequence)
chl_tabla <- c("MW064264.1", chl_size, chl_gc)

# Coronavirus ARGENTINA
#arg <- read.GenBank("OQ691595.1")
arg_fasta<- read.fasta("arg.fasta")
arg_sequence <- arg_fasta[[1]]
arg_size <- length(arg_sequence)
arg_count <- count(arg_sequence, 1)
arg_gc <- GC(arg_sequence)
arg_tabla <- c("OQ691595.1", arg_size, arg_gc)

# Coronavirus COLOMBIA
#col <- read.GenBank("OQ691597.1")
col_fasta<- read.fasta("col.fasta")
col_sequence <- col_fasta[[1]]
col_size <- length(col_sequence)
col_count <- count(col_sequence, 1)
col_gc <- GC(col_sequence)
col_tabla <- c("OQ691597.1", col_size, col_gc)

# Coronavirus SUDAFRICA
#afr <- read.GenBank("ON647706.1")
afr_fasta<- read.fasta("afr.fasta")
afr_sequence <- afr_fasta[[1]]
afr_size <- length(afr_sequence)
afr_count <- count(afr_sequence, 1)
afr_gc <- GC(afr_sequence)
afr_tabla <- c("ON647706.1", afr_size, afr_gc)



# Grafica de longitudes

longitud <- c(jpn_size, usa_size, mex_size, chn_size, per_size,
              rus_size, chl_size, arg_size, col_size, afr_size)

nombres <- c("Jpn", "Usa", "Mx", "Chn", "Per",
             "Rus", "Chl", "Arg", "Col", "Afr")

barplot(longitud, names.arg = nombres, xlab = "Variantes", ylab = "Longitud", 
        main = "Longitud de los Genomas Virales", col = "steelblue")



# Grafica de nucleotidos

conteos <- list(jpn_count, usa_count, mex_count, chn_count, per_count,
                rus_count, chl_count, arg_count, col_count, afr_count)

matriz_conteos <- sapply(conteos, unname)

barplot(matriz_conteos, beside = TRUE, col = c("red", "blue", "green", "orange"),
        main = "Composición de Nucleótidos de los Genomas Virales",
        xlab = "Genomas Virales", ylab = "Frecuencia", names.arg = nombres)



# Grafica de GC
genomas_gc <- c(jpn_gc, usa_gc, mex_gc, chn_gc, per_gc,
                rus_gc, chl_gc, arg_gc, col_gc, afr_gc)

barplot(genomas_gc, names.arg = nombres, xlab = "Variantes", ylab = "Cantidad de GC", 
        main = "Cantidad de GC", col = "purple")



# Tabla
#jpn_tabla <- c("OQ804217.1", jpn_size, jpn_gc)
#usa_tabla <- c("OQ891051.1", usa_size, usa_gc)
#mex_tabla <- c("OM060237.1", mex_size, mex_gc)
#chn_tabla <- c("OQ653373.1", chn_size, chn_gc)
#per_tabla <- c("MT263074.1", per_size, per_gc)
#rus_tabla <- c("MW305251.1", rus_size, rus_gc)
#chl_tabla <- c("MW064264.1", chl_size, chl_gc)
#arg_tabla <- c("OQ691595.1", arg_size, arg_gc)
#col_tabla <- c("OQ691597.1", col_size, col_gc)
#afr_tabla <- c("ON647706.1", afr_size, afr_gc)

tabla <- data.frame(ID_Genoma = 1:10,Longitud = 1:10, Contenido_De_GC = 1:10)
rownames(tabla) <- c("SARS-CoV-2-Japon", "SARS-CoV-2-USA", "SARS-CoV-2-Mexico","SARS-CoV-2-China", "SARS-CoV-2-Peru",
                     "SARS-CoV-2-Rusia", "SARS-CoV-2-Chile", "SARS-CoV-2-Argentina", "SARS-CoV-2-Colombia", "SARS-CoV-2-Sudafrica")
tabla[1,] <- jpn_tabla
tabla[2,] <- usa_tabla
tabla[3,] <- mex_tabla
tabla[4,] <- chn_tabla
tabla[5,] <- per_tabla
tabla[6,] <- rus_tabla
tabla[7,] <- chl_tabla
tabla[8,] <- arg_tabla
tabla[9,] <- col_tabla
tabla[10,] <- afr_tabla
tabla






# SEGUNDA EVIDENCIA

# Codigo de los genomas para obtener archivo GenBank
SARS <- c("OQ804217.1","OQ891051.1","OM060237.1","OQ653373.1","MT263074.1",
          "MW305251.1","MW064264.1","OQ691595.1","OQ691597.1","ON647706.1")
virus_sequences <- read.GenBank(SARS)
class(virus_sequences)

write.dna(virus_sequences, file="coronavirus_seqs.fasta", format="fasta")

virus_seq_not_align <- readDNAStringSet("coronavirus_seqs.fasta", format="fasta")
class(virus_seq_not_align)

virus_seq_not_align

virus_seq_not_align <- OrientNucleotides(virus_seq_not_align)

virus_seq_align <- AlignSeqs(virus_seq_not_align)

BrowseSeqs(virus_seq_align)

writeXStringSet(virus_seq_align, file="coronavirus_seq_align.fasta")

virus_aligned <- read.alignment("coronavirus_seq_align.fasta", format = "fasta")

matriz_distancia <- dist.alignment(virus_aligned, matrix = "similarity")

matriz_distancia

temp <- as.data.frame(as.matrix(matriz_distancia))
temp

table.paint(temp, cleg=0,clabel.row = .5, clabel.col = .5) +  scale_color_viridis()

virus_tree <- nj(matriz_distancia)

virus_tree <- ladderize(virus_tree)
plot(virus_tree)