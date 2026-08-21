const fs = require('fs');

fs.writeFile('example.txt', 'Welcome Back', (err) => {
    if(err){
        throw err;
    }
    console.log('File Created:');
    
    fs.readFile('example.txt', 'utf8', (err, data) => {
        console.log('File content:', data)
    });
});

fs.writeFile('example.txt', 'Updated Now', (err) => {
    if(err){
        throw err;
    }
    console.log('File Overwritten (Updated):');
});

fs.unlink('example.txt', (err) => {
    if(err){
        throw err;
    }
    console.log('File deleted');
});


