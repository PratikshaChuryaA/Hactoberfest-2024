import java.util.Scanner;

class Strong {
    public boolean isArmstrong(int number) {
        int originalNumber = number;
        int result = 0;
        int n = 0;
        int temp = number;

        while (temp != 0) {
            temp /= 10;
            n++;
        }

        temp = number;
        while (temp != 0) {
            int remainder = temp % 10;
            result += Math.pow(remainder, n);
            temp /= 10;
        }

        return result == originalNumber;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        Strong strong = new Strong();

        if (strong.isArmstrong(number)) {
            System.out.println(number + " is an Armstrong number.");
        } else {
            System.out.println(number + " is not an Armstrong number.");
        }

        scanner.close();
    }
}
