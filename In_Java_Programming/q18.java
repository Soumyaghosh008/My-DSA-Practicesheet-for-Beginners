import java.util.Scanner;
import java.util.Vector;

public class q18 {

    public static int get_Maximum(Vector<Integer> vec, int ln) {

        int max = Integer.MIN_VALUE;

        for (Integer i : vec) {

            if (i > max) {
                max = i;
            }
        }
        return max;
    }

    public static int get_Minimum(Vector<Integer> vec, int ln) {

        int min = Integer.MAX_VALUE;

        for (Integer i : vec) {

            if (i < min) {
                min = i;
            }
        }
        return min;
    }

    public static void get_Element(Vector<Integer> vec, int ln, Scanner sc) {
        System.out.println("Enter The Array Elements: ");

        for (int i = 0; i < ln; i++) {

            int num = sc.nextInt();
            vec.addLast(num);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter The Array Length: ");
        int ln = sc.nextInt();

        Vector<Integer> vec = new Vector<Integer>();

        get_Element(vec, ln, sc);

        int max = get_Maximum(vec, ln);
        int min = get_Minimum(vec, ln);

        System.out.println("The Difference is: " + (max - min));

        sc.close();
    }
}
