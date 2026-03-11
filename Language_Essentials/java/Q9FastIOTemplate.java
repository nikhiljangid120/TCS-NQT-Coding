// Universal Fast I/O Template for Competitive Programming
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class Q9FastIOTemplate {

    // FastScanner class for reading input extremely fast
    static class FastScanner {
        BufferedReader br;
        StringTokenizer st;

        public FastScanner() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    String line = br.readLine();
                    if (line == null) return null;
                    st = new StringTokenizer(line);
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }

    public static void main(String[] args) {
        FastScanner sc = new FastScanner();
        
        // Fast output (don't forget to call out.flush() at the very end!)
        PrintWriter out = new PrintWriter(System.out);
        
        // Example usage:
        /*
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            // solve
        }
        */
        
        out.println("Fast I/O template successfully executing...");
        out.println("Use BufferedReader or this FastScanner class for TCS NQT platform to avoid TLE.");
        
        // ALWAYS flush output
        out.flush();
    }
}
