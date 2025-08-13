import java.util.Scanner;

public class q27 {

    public static boolean get_Checked(int arr[], int temp[], int ln) {

        boolean flag = false;

        for (int i = 0; i < ln; i++) {

            if(arr[i] != temp[i]){

                flag = true;
            }
        }

        return flag;
    }

    public static void get_Reversed(int arr[], int ln) {

        for (int i = 0; i < ln / 2; i++) {

            arr[i] ^= arr[ln - 1];
            arr[ln - 1] ^= arr[i];
            arr[i] ^= arr[ln - 1];
        }
    }

    public static void get_Copied(int arr[], int temp[], int ln) {

        for (int i = 0; i < ln; i++) {
            temp[i] = arr[i];
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

        System.out.println("Enter Array Length: ");
        int ln = sc.nextInt();

        int arr[] = new int[ln];
        int temp[] = new int[ln];

        get_Element(arr, ln, sc);
        get_Copied(arr, temp, ln);
        get_Reversed(arr, ln);
        boolean ans = get_Checked(arr, temp, ln);

        if (ans == false) {
            System.out.println("This array is a Palindrome");
        }else{
            System.out.println("This array is not a Palindrome");
        }

        sc.close();
    }
}