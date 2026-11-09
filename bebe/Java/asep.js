const username = [
    'Johntor',
    'Asep',
    'Telenova',
];
const newUsername = 'Asep';
const isAvailable = username.includes(newUsername);
if (isAvailable) {
    console.log('Username sudah digunakan');
} else {
    console.log('Username tersedia');
}
console.log(username[0]);