//! Here we do this code using array, because this will be more interesting here.
//* In Vector's we have some built in functions for this, which will make this program more easier.

import java.util.Scanner;

public class q19 {

    public static void get_Inserted(int arr[], int ln, int pos, int key) {

        for (int i = ln; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        arr[pos - 1] = key;
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

        System.out.print("Enter The Key Element: ");
        int key = sc.nextInt();

        System.out.print("Enter The Position: ");
        int pos = sc.nextInt();

        get_Inserted(arr, ln, pos, key);

        ln++;

        System.out.println("The Current Array is:");

        for (int i = 0; i < ln; i++) {
            System.out.print(arr[i] + " ");
        }

        sc.close();
    }
}
