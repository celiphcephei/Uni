const Sequelize = require('sequelize');

const sequelize = new Sequelize('classicmodels', 'root', '', {
    host: 'localhost',  // Cambia esto al host de tu base de datos
    dialect: 'mysql',
});


module.exports = {sequelize};