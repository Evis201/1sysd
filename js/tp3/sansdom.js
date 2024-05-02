let todos = [];
addTodo('Acheter du lait');
displayTodos();

function addTodo(task) {
    let todo = {
        id: todos.length,
        text: task,
        completed: false
    };
    todos.push(todo);
}

function displayTodos() {
    for(let i = 0; i < todos.length; i++) {
        let status = todos[i].completed ? 'Tâche complétée' : 'Tâche non complétée';
        console.log(`ID: ${todos[i].id}, Texte: ${todos[i].text}, Statut: ${status}`);
    }
}

function isCompleted(id) {
    for(let i = 0; i < todos.length; i++) {
        if(todos[i].id === id) {
            todos[i].completed = true;
            break;
        }
    }
}

function removeTodo(id) {
    for(let i = 0; i < todos.length; i++) {
        if(todos[i].id === id) {
            todos.splice(i, 1);
            break;
        }
    }
}