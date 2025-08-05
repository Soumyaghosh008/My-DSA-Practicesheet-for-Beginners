//! Here we do this code using array, because this will be more interesting here.
//* In Vector's we have some built in functions for this, which will make this program more easier.

import java.util.Scanner;

public class q20 {

    public static void get_Deleted(int arr[], int ln, int pos) {

        for (int i = pos - 1; i < ln - 1; i++) {
            arr[i] = arr[i + 1];
        }
    }

    public static void get_Element(int arr[], int ln, Scanner sc) {
        System.out.println("Enter The Array Elements: ");

        for (int i = 0; i < ln; i++) {
            arr[i] = sc.nextInt();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter The Array Length: ");
        int ln = sc.nextInt();

        int arr[] = new int[ln + 1];

        get_Element(arr, ln, sc);

        System.out.print("Enter The Position: ");
        int pos = sc.nextInt();

        get_Deleted(arr, ln, pos);
        ln--;

        System.out.println("The Current Array is:");

        for (int i = 0; i < ln; i++) {
            System.out.print(arr[i] + " ");
        }

        sc.close();
    }
}
