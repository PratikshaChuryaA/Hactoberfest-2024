// Function to reverse string
function reverseString(str) {
    let strRev = "";
    for (let i = str.length - 1; i >= 0; i--) {
        strRev += str[i];
    }
    console.log(strRev);
}

// Function call
reverseString("GeeksforGeeks");
reverseString("JavaScript");
reverseString("TypeScript");