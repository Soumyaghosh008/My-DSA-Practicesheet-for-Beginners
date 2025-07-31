//! Doing this problem using array for avoiding unnecessery code complication.
//* But you can also do it using Vector.
//* Here we solve this using brute force method.

import java.util.Scanner;

public class q74 {

    public static int get_Max_Sum(int arr[], int ln) {

        int sum = 0;
        int max_sum = 0;
        for (int i = 0; i < ln; i++) {

            for (int j = i + 1; j < ln; j++) {

                sum = 0;

                for (int k = i; k <= j; k++) {

                    sum += arr[k];

                    if (sum > max_sum) {
                        max_sum = sum;
                    }
                }
            }
        }
        return max_sum;
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

        System.out.println("The Max Sum Using Brute Force Method is: " + get_Max_Sum(arr, ln));

        sc.close();
    }
}
