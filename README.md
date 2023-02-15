# Ohmimetro
Ohmímetro feito com Arduino no Visual Studio Code com o Platform IO.
Para executar este projeto, basta colocá-lo dentro da pasta "Projects" do PlatformIO
<p>Os Cálculos para encontrar a resistência elétrica estão no arquivo "ohmimeter.cpp" dentro da pasta "src"</p>

<p>Para que fosse possível construír o ohmímetro, o circuito foi montado como um divisor de tensão. Onde o resistor R é fixo e o resistor RL é a carga na qual será feita a medida da tensão para que, posteriormente aplicando a primeira lei de ohm, a resistência possa ser encontrada</p>

<figure><img width="198" alt="DivisorDeTensão" src="https://user-images.githubusercontent.com/102774638/218358717-cdc6ba8a-fb3a-47e6-bc77-75ca9dbfeac0.png">
<figcaption>Circuito divisor de tensão</figcaption>
</figure>

