document.addEventListener('DOMContentLoaded', function() {
    fetch('https://jsonplaceholder.typicode.com/posts')
    .then(response => response.json())
    .then(data => {
        let postsContainer = document.getElementById('posts-container');
        data.forEach(post => {
            let postElement = document.createElement('div');
            postElement.textContent = post.title;
            postsContainer.appendChild(postElement);
        });
    })

    document.getElementById('search').addEventListener('input', function(e) {
        let searchValue = e.target.value.toLowerCase();
        let posts = document.getElementById('posts-container').children;
        for (let post of posts) {
            let postContent = post.textContent.toLowerCase();
            if (postContent.indexOf(searchValue) !== -1) {
                post.style.display = '';
            } else {
                post.style.display = 'none';
            }
        }
    });
    
    window.openBurgerMenu = function() {
        var x = document.getElementById("myLinks");
        if (x.style.display === "block") {
            x.style.display = "none";
        } else {
            x.style.display = "block";
        }
    }
});

document.getElementById('theme-switch').addEventListener('click', function() {
    document.body.classList.toggle('dark-theme');
    var theme = document.body.classList.contains('dark-theme') ? 'dark' : 'light';
    localStorage.setItem('theme', theme);
});

window.addEventListener('load', function() {
    var savedTheme = localStorage.getItem('theme') || 'light';
    if (savedTheme === 'dark') {
        document.body.classList.add('dark-theme');
    } else {
        document.body.classList.remove('dark-theme');
    }
});

document.getElementById('contact-form').addEventListener('submit', function(e) {
    e.preventDefault();
    let name = document.getElementById('name').value;
    let email = document.getElementById('email').value;
    if (!name) {
        alert('Name is required');
    } else if (!email) {
        alert('Email is required');
    } else if (!email.includes('@')) {
        alert('Email is not valid');
    } else {
        alert('Form submitted successfully');
    }
});