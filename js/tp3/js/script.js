document.addEventListener('DOMContentLoaded', (event) => {
    let todos = [];

    function addTodo(task) {
        let todo = {
            id: todos.length,
            text: task,
            completed: false
        };
        todos.push(todo);
    
        let li = document.createElement('li');
        li.textContent = todo.text + " ";     
    
        li.addEventListener('click', function() {
            todo.completed = !todo.completed;
            if (todo.completed) {
                li.style.textDecoration = 'underline';
                li.style.color = 'green';
            } else {
                li.style.textDecoration = 'none';
                li.style.color = 'initial';
            }
        });
    
        let deleteButton = document.createElement('button');
        deleteButton.textContent = 'Supprimer';
        deleteButton.className = 'delete-button';
    
        deleteButton.addEventListener('click', function() {
            removeTodo(todo.id);
            todoList.removeChild(li);
        });
    
        li.appendChild(deleteButton);
        todoList.appendChild(li);
    }

    document.getElementById('addTaskButton').addEventListener('click', function() {
        let taskInput = document.getElementById('taskInput');
        if (taskInput.value.trim() === '') {
            alert('Il est impossible de mettre une tâche vide.');
        } else {
            addTodo(taskInput.value);
            taskInput.value = '';
        }
    });

    function removeTodo(id) {
        todos = todos.filter(todo => todo.id !== id);
    }
});