using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ejercicio_3
{
    class Program
    {
        static void Main()
        {

            
            
            {
                double metros;
                Console.Write("Ingrese la cantidad en kilómetros: ");
                double km = Convert.ToDouble(Console.ReadLine());
                metros = (km * 1000);
                double yardas = metros* 1.09361;
                double varas = metros * 1.1963;
                Console.WriteLine("La cantidad en metros es: " + metros);
                Console.WriteLine("La cantidad en yardas es: " + yardas);
                Console.WriteLine("La cantidad en varas es: " + varas);
       
                Console.ReadLine();
            }
        }
    }
}
