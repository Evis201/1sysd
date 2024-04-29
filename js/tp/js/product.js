export class Product {
    constructor(name, price, stock) {
        this.name = name;
        this.price = price;
        this.stock = stock;
    }

    buy(quantity) {
        if (this.stock < quantity) {
            return `Désolé, nous n'avons pas assez de ${this.name} en stock.`;
        }

        this.stock -= quantity;
        return `Vous avez acheté ${quantity} ${this.name}. Il reste ${this.stock} en stock.`;
    }

    updateDisplay() {
        document.getElementById(this.name.toLowerCase()).textContent = `${this.name}: $${this.price}. En stock: ${this.stock}`;
    }
}