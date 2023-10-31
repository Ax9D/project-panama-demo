
package panama_demo;

import org.nativelib.NativeLib;

public class App {

    public static void main(String[] args) {
        System.out.println(NativeLib.factorial(5));
        NativeLib.print_hello();
    }
}
