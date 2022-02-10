public class largest_of_three_numbers {
    public static void main(String[] args) {
        int a = 23, b = 87, c = 54;
        if (a >= b) {
            if (a >= c)
                System.out.println("The Largest number is " + a);
            else
                System.out.println("The Largest number is " + c);
        } else {
            if (b >= c)
                System.out.println("The Largest number is " + b);
            else
                System.out.println("The Largest number is " + c);
        }
    }
}
