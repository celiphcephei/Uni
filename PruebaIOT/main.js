const {Router} = require('express');
const Payment = require('./payments');
const router = Router();

router.get('/', async (req, res)=>{
    let payments = await Payment.findAll({
        raw: true,
        limit: 5
    });
    //console.log(req);
    //res.send('<h1>Este es un encabezado h1</h1>');
    //console.log(payments);
    console.log(req.query);
    res.render('index.hbs', {payments});
});

router.get('/:id', async (req, res)=>{
    let id = Number(req.params.id);
    if(isNaN(id)){
        id = 1;
    }
    let payments = await Payment.findAll({
        raw: true,
        limit: 5,
        offset: (id - 1) * 5
    });
    console.log(payments);
    console.log(req.query);
    res.render('index.hbs', {payments});
});

module.exports = router;