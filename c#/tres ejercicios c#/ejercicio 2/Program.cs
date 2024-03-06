using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ejercicio_2
{
    
    class Program
    {
        static void Main()
        {

         
          {
                Console.Write("Ingrese el sueldo del empleado ");
                double sueldo = Convert.ToDouble(Console.ReadLine());
                double descuentoderenta = sueldo * 0.10;
                double descuentoAFT = sueldo * 0.07;
                double descuentosegurosocial = sueldo * 0.05;
                double sueldoapagartotal = sueldo - descuentoderenta - descuentoAFT - descuentosegurosocial;
                
          
                if(sueldo > 3300)
                {
                    Console.WriteLine("Descuentos:");
                    Console.WriteLine("Descuento de Renta:" + descuentoderenta);
                    Console.WriteLine("Descuento de AFT:" + descuentoAFT);
                    Console.WriteLine("Descuento de Seguro Social:" + descuentosegurosocial);
                    Console.WriteLine("Sueldo total a pagar:" + sueldoapagartotal);

                }
                else
                {
                    Console.Write("el sueldo es menor a 3300");
                }
                Console.ReadKey();
            }
        }
    }
}
