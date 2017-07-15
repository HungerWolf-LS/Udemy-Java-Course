/**
 * Created by lenovo on 27/03/2017.
 */
public class ByteShorInt {
    public static void main(String[] args)
    {
        // Int tiene un ancho de 32
        int minValue = 200; // Numero Menor capaz de ser guardado

        int maxValue =  400; // Numero Mayor capaz de ser guardado
        // Byte tiene un ancho de 8
        byte unByte = 16;
        // Da error porque se transforma a Int para solucionar se usa el cast
        //byte newByte = (unByte/2);
        byte newByte = (byte) (unByte/4);
        System.out.print("Valor de newByte" + newByte);
        // Short tiene un ancho de 16
        short unShort = 32;
        // Con los long se debe usar una L para mostrarle al compilador que es un tipo de dato Long
        // Long tiene unx ancho de 64
        long unLong = 50000L + 10L *(minValue+unByte+unShort);
        System.out.println("Valor de Longs = "+unLong);

    }
}
