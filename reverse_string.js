function reverseString(str) 
{
    if (str === "")
         {
    console.log("The string is empty.");
    return;
    }
    
    // Using built-in methods for better performance and readability
    let strRev = str.split("").reverse().join("");
    
    console.log(strRev);
 }
    // Function calls
    reverseString("GeeksforGeeks");
    reverseString("JavaScript");
    reverseString("TypeScript");
    reverseString(""); // Edge case: Empty string
    reverseString("😊"); // Edge case: Unicode characters