//! Doing this problem using array for avoiding unnecessery code complication.
//* But you can also do it using Vector.

import java.util.Scanner;

public class q32 {

    public static void get_Sum_and_Avg(int arr[], int ln) {

        System.out.println("\n");

        int sum = 0, avg = 0, length = 0;

        for (int i = 0; i < ln; i++) {

            for (int j = i; j < ln; j++) {

                sum = 0;

                for (int k = i; k <= j; k++) {
                    sum += arr[k];
                }

                length = j - i + 1;
                avg = sum / length;

                System.err.println("The Sum is " + sum + " and Average is " + avg);
            }
        }
    }

    public static void get_Element(int arr[], int ln, Scanner sc) {

        System.out.println("Enter Array Elements: ");

        for (int i = 0; i < ln; i++) {
            arr[i] = sc.nextInt();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter The Array Length: ");
        int ln = sc.nextInt();

        int arr[] = new int[ln];

        get_Element(arr, ln, sc);
        get_Sum_and_Avg(arr, ln);

        sc.close();
    }
}
