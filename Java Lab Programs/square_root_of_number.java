import java.util.Scanner;

public class square_root_of_number {
    public static void main(String[] args) {
        System.out.print("Enter any Number : ");
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        System.out.println("The Square Root of the given Number is " + squareRoot(n));
        s.close();
    }

    public static double squareRoot(int num) {
        double x;
        double sqrtroot = num / 2;
        do {
            x = sqrtroot;
            sqrtroot = (x + (num / x)) / 2;
        } while ((x - sqrtroot) != 0);
        return sqrtroot;
    }

    // public static void main(String args[]) {
    // Scanner s = new Scanner(System.in);
    // System.out.print("Enter any Number : ");
    // int n = s.nextInt();
    // int x = n;
    // int arr[] = new int[5], i = -1;
    // while (x != 0) {
    // i++;
    // arr[i] = x % 100;
    // x = x / 100;
    // }
    // int d = 0, q = 0, r = 0;
    // for (int j = i; j >= 0; j--) {
    // int a = 0;
    // while (((r * 100) + arr[j]) >= (((d*10)+a) * a)) {
    // a = a + 1;
    // }
    // a = a - 1;
    // r = ((r * 100) + arr[j]) - (a * a);
    // if (d == 0)
    // d = a + a;
    // else
    // d = (d * 10) + a;
    // q = (q * 10) + a;
    // }
    // System.out.print("The Square Root of the given Number is : " + q);
    // s.close();
    // }
}