# Sobre

<p>Este repositório em C++  foi desenvolvido para adicionar a resolução dos exercícios da instrução prática 5 da Residência em Software promovido pela CEPEDI em parceria com a UESC.</p>

# Instruções práticas
### Exercício 2: Operações com caracteres

<p>Escreva um programa que:

<p><b>a.</b> Declare três variáveis de tipo char, vamos chamar de ch1, ch2 e
ch3, mas você pode escolher outro identificador se achar mais
apropriado;<p>
<p><b>b.</b> Peça ao usuário para digitar um caractere, obtenha o mesmo da
entrada padrão utilizando cin, e atribua o valor digitado à variável
ch1;<p>

<p><b>c.</b>  Verifique, utilizando o operador condicional (?) se se trata de:
i. uma letra maiúscula;
ii. uma letra minúscula;
iii. um dígito;
iv. outro tipo de caractere;<p>

<p><b>d.</b>  Atividade avançada: Verifique se o C++ fornece algum tipo de recurso
na sua biblioteca padrão para obter este tipo de resposta de forma
direta;<p>

<p><b>e.</b>  Atribua à variável ch2 o caractere 81, identifique e imprima na tela,
utilizando cout, o caractere em formato numérico decimal, octal,
hexadecimal e como caractere;
f. Dado que o caractere ch2 é uma letra maiúscula, atribua à variável
ch3 o caractere que corresponde à mesma letra minúscula (não pode
procurar na tabela ASCII) e Imprima ch3 na tela, utilizando cout, em
formato numérico decimal, octal, hexadecimal e como caractere;</p>


### Exercício 3: Operações com inteiros

<p>Escreva um programa que:

<p><b>a.</b> Declare três variáveis de tipo int, vamos chamar de a, b e c mas
você pode escolher outro identificador se achar mais apropriado;<p>
<p><b>b.</b> Peça ao usuário para digitar dois números inteiros, obtenha-os da
entrada padrão, usando cin, e atribua os valores digitados às
variáveis a e b respectivamente;<p>

<p><b>c.</b> Atribua à variável c a somas das variáveis a e b, imprima o resultado
na tela em formato hexadecimal;<p>

<p><b>d.</b>  Atribua à variável c o produto das variáveis a e b, imprima o
resultado na tela em formato octal;<p>

<p><b>e.</b>  Atribua à variável c o módulo (valor absoluto) da diferença entre as
variáveis a e b, imprima o resultado na tela; (valor absoluto: se c < 0
retorna -c, caso contrário retorna c)</p>

<p><b>f.</b>  Atividade avançada: Verifique se o C++ fornece algum tipo de recurso
na sua biblioteca padrão para obter este tipo de resposta de forma
direta;</p>

<p><b>g.</b>  Atribua à variável c o quociente entre variáveis a e b, imprima o
resultado na tela; (se b for igual a zero a divisão não é possível e um
aviso deve ser apresentado ao usuário);</p>

<p><b>h.</b>  Se a divisão anterior for possível, determinar se a é divisível de forma
exata por b, mostrar o resultado na tela;</p>

<p>Escreva um programa que:
<p><b>a.</b> Peça ao usuário para fornecer um número inteiro, obtenha-o da
entrada padrão, usando cin, e armazene numa variável de tipo int;
<p><b>b.</b> Determine se o valor fornecido pode ser representado, sem perda de
informação, como um short int. Imprima na tela o valor
fornecido, seguido das palavras “e maior que um short int”
ou “este valor pertence ao intervalo dos short
int”. Use apenas o operador condicional (?)

### Exercício 4: Operações com valores de ponto flutuante

<p>Escreva um programa que:

<p><b>a.</b> Declare três variáveis de tipo double, vamos chamar de x, y e z
mas você pode escolher outro identificador se achar mais apropriado;<p>
<p><b>b.</b> Peça ao usuário para digitar dois números de ponto flutuante,
obtenha-os da entrada padrão, usando cin, e atribua os valores
digitados às variáveis x e y respectivamente;<p>

<p><b>c.</b> Considerando que x e y são coordenadas num plano cartesiano,
identifique em que lado da curva f(x) = 5x + 2 se encontra (esquerda,
direita ou na curva). Imprima o resultado na tela;<p>

<p><b>d.</b> Atividade avançada: Atribua à variável z o valor da distância
euclidiana do ponto (x, y) ao centro de coordenadas; (distância
euclidiana se calcula como raiz quadrada de (𝑥2 + 𝑦2), (pesquise na biblioteca padrão
como determinar a raiz quadrada de um número)<p>

<p><b>e.</b>  Atribua à variável z o produto entre as variáveis x e y, imprima o
resultado na tela em notação científica;</p>

<p>Escreva um programa que:
<p><b>a.</b> leia da entrada padrão os valores reais dos coeficientes a, b e c, de um
polinômio de segundo grau do tipo 𝑝(𝑥) = 𝑎𝑥2 + 𝑏𝑥 + 𝑐, e imprima: i. Se o polinômio tem uma, duas ou nenhuma raiz real (lembre
das suas aulas de segundo grau qual a condição que define
qual o número de raízes de um polinômio);
ii. Se tiver raízes (uma ou duas) imprima o valor das mesmas. No
exercício anterior você deve ter descoberto como calcular a
raiz quadrada de um número;
<p><b>b.</b>Leia da entrada padrão um valor para x e imprima o valor de p(x);

### Exercício 5: Operadores bit a bit

<p>Uma pesquisa monitora 8 genes de uma planta para avaliar como cada um
deles influencia na resposta a uma determinada praga. Os pesquisadores
optaram por representar a informação dos genes de cada planta com um
inteiro sem sinal, onde cada bit da representação binária identifica se um
gene está presente (1) ou não (0) naquela planta. Implemente um programa
que:
<p><b>a.</b> Leia a informação genética de uma planta na forma de um caractere
sem sinal (unsigned char);
<p><b>b.</b>Utilizando os operadores bit a bit identifique quantos, dos genes
estudados, estão presentes;
<p><b>c.</b>Solicite do usuário a informação sobre qual gene específico ele que
informação (um valor inteiro entre 1 e 8) e retorne se este gene se
encontra nesta planta.

# Autores

- Alan Santos
- Franklin Pereira
- José Ulian
- Lucas Silva
- Marcelo Cruz
