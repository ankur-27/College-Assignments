import java.util.Scanner;

public class table_of_number {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter any Number : ");
        int n = s.nextInt();
        System.out.println("The Table of the given Number is : ");

        for (int i = 1; i <= 10; i++) {
            System.out.println(n + " * " + i + " = " + n * i);
        }
        s.close();
    }
}