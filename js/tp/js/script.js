import "style.css"

class Product {
    constructor(name, price, stock) {
        this.name = name;
        this.price = price;
        this.stock = stock;
    }

    buy(quantity) {
        if (this.stock < quantity) {
            console.log(`Désolé, nous n'avons pas assez de ${this.name} en stock.`);
            return;
        }

        this.stock -= quantity;
        console.log(`Vous avez acheté ${quantity} ${this.name}. Il reste ${this.stock} en stock.`);
    }
}

let apple = new Product("Pomme", 0.5, 100);
let banana = new Product("Banane", 0.25, 50);

apple.buy(10);
banana.buy(20);