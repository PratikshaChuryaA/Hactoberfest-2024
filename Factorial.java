package Factorial;
import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        long factorial = calculateFactorial(number);
        System.out.println("Factorial of " + number + " is: " + factorial);
        scanner.close();
    }

    public static long calculateFactorial(int n) {
        if (n == 0) {
            return 1; // Base case
        }
        return n * calculateFactorial(n - 1); // Recursive case
    }
}
