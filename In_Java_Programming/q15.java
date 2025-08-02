import java.util.Scanner;
import java.util.Vector;

//! In This searching algo we have to used an algorithm which is, 
//* pos = low + ((x - arr[low]) * (high - low)) / (arr[high] - arr[low]).

public class q15 {

    public static int get_Searched(Vector<Integer> vec, int ln, int key) {

        int mid = 0, low = 0, high = vec.size() - 1;

        while (low <= high) {

            mid = low + ((key - vec.elementAt(low)) * (high - low)) / (vec.elementAt(high) - vec.elementAt(low));

            if (key < vec.elementAt(mid)) {
                high = mid - 1;

            } else if (key > vec.elementAt(mid)) {

                low = mid + 1;
            } else {
                return mid + 1;
            }
        }
        return -1;
    }

    public static void get_Element(Vector<Integer> vec, int ln, Scanner sc) {

        System.out.println("Enter The Array Elements: ");

        for (int i = 0; i < ln; i++) {
            int val = sc.nextInt();
            vec.addLast(val);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter The Array Length: ");
        int ln = sc.nextInt();

        Vector<Integer> vec = new Vector<Integer>();

        get_Element(vec, ln, sc);

        System.out.println("Enter The Array Key Value: ");
        int key = sc.nextInt();

        int ans = get_Searched(vec, ln, key);

        System.out.println("The Position is: " + ans);
        sc.close();
    }
}
