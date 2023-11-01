const express = require('express');
const { sequelize } = require('./db.js');
const { engine } = require('express-handlebars');

class Server{
    constructor(){
        this.paths = {
            main: '/'
        };
        this.app = express();
        this.routes();
        this.initDB();
        this.middlewares();
    }
    listen(){
        this.app.listen(3000, ()=>{
            console.log("Hola tamajire");
        })
    }
    routes(){
        this.app.use(this.paths.main, require('./main.js'));
    }
    async initDB(){
        try {
            await sequelize.authenticate();
        } catch (error) {
            console.log(error.message);
        }
    }
    middlewares(){
        this.app.engine('handlebars', engine());
        this.app.set('view engine', 'handlebars');
    }
};

module.exports = Server;