import { Product } from './product.js';

document.addEventListener('DOMContentLoaded', (event) => {
    let apple = new Product("Pomme", 0.5, 100);
    let banana = new Product("Banane", 0.25, 50);

    let element = document.getElementById('apple');
    element.style.color = 'red';
    element.style.fontFamily = 'Arial, sans-serif';

    let productsDiv = document.getElementById('products');
    let totalStockElement = document.getElementById('totalStock');
    let totalStock = 0;

    [apple, banana].forEach(product => {
        let p = document.createElement('p');
        p.id = product.name.toLowerCase();
        p.textContent = `${product.name}: $${product.price}. En stock: ${product.stock}`;
        let button = document.createElement('button');
        button.id = `buy${product.name}`;
        button.textContent = 'Acheter';
        button.addEventListener('click', () => {
            let message = product.buy(1);
            p.textContent = `${product.name}: $${product.price}. En stock: ${product.stock}. ${message}`;
            totalStock -= 1;
            totalStockElement.textContent = `Total en stock: ${totalStock}`;
        });
        productsDiv.appendChild(p);
        productsDiv.appendChild(button);

        totalStock += product.stock;
    });

    totalStockElement.textContent = `Total en stock: ${totalStock}`;
});

