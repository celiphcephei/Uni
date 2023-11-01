const { DataTypes } = require("sequelize");
const { sequelize } = require("./db");

const Payment = sequelize.define('payments',{
    customerNumber:{
        type:DataTypes.INTEGER,
        primaryKey: true
    },
    checkNumber:{
        type:DataTypes.STRING
    },
    paymentDate:{
        type:DataTypes.DATE
    },
    amount:{
        type:DataTypes.DECIMAL
    },
},{
    timestamps: false
});

module.exports = Payment;