# Projeto_02_ICG_2019
2° Projeto - Implementação de um pipeline gráfico

UNIVERSIDADE FEDERAL DA PARAÍBA
CENTRO DE INFORMÁTICA
DEPARTAMENTO DE CIÊNCIA DA COMPUTAÇÃO
DEPARTAMENTO DE MATEMÁTICA COMPUTACIONAL

Professor: Christian Azambuja Pagot 

Dupla:
CARLOS MAGNO DA SILVA – Matrícula: 20160143331
EMMANUELLA FAUSTINO ALBUQUERQUE – Matrícula: 20170002239

Curso: Ciência da Computação
Semestre: 2018.2 

Implementação de um Pipeline Gráfico Completo

# 1. INTRODUÇÃO
O presente projeto consiste na segunda atividade da disciplina de ICG, no presente
período, tendo como finalidade familiarizar os alunos com a estrutura e o
funcionamento do pipeline gráfico, através da implementação de um pipeline gráfico
completo, capaz de transformar vértices descritos no espaço do objeto em primitivas
rasterizadas no espaço de tela. 

# Atividade 
Foram implementadas as seguintes transformações: 
1° - Transformação: Espaço do Objeto → Espaço do Universo 
É no Espaço do Objeto onde cada objeto é inicialmente criado. Cada objeto tem seu
espaço individual, caracterizado pelo seu sistema de coordenadas. 
A transformação neste espaço visa transferir os objetos deste estado para o Estado
do Universo. É neste novo espaço que os objetos advindos do espaço do objeto,
passam por algumas transformações.

2° - Transformação: Espaço do Universo → Espaço da Câmera 
Da mesma forma que acontece com os objetos, a câmera (que é o observador)
necessita também, ter seus sistemas de coordenadas configurados. A câmera é definida
através da configuração dos seguintes parâmetros:
1. Sua posição;
2. O seu vetor de direção;
3. Seu vetor de UP(cima).
Os valores dos parâmetros supracitados serão necessários para formar as bases do
espaço da câmera.

3° - Transformação: Espaço da Câmera → Espaço Projetivo ou de Recorte
De posse dos pontos no espaço da câmera, o próximo passo do pipeline gráfico é
projetar esses pontos em um plano de projeção (view plane), para em seguida, passar
esses pontos, pelo procedimento de recorte. Ao realizar isso, podemos escolher como
queremos que tais primitivas sejam projetadas: com projeção em perspectiva ou
projeção em paralelo.

4° - Transformação: Espaço de Recorte → Espaço "Canônico" 
Após a aplicação da projeção perspectiva devemos homogeneizar os vértices
dividindo eles pela coordenada w, isto irá provocar uma mudança na cena fazendo com
que os objetos próximos da câmera fiquem maiores e os mais afastados fiquem menores,
tudo isso em um espaço que varia de -1 até 1.

5° - Transformação: Espaço Canônico → Espaço de Tela 
No espaço canônico é garantido que todos os vértices da cena visível possuam os
valores de suas coordenadas entre -1 e 1. Isto acontece depois da homogeneização dos
vértices. Em seguida se faz necessário preparar os vértices para serem rasteirados na tela. 
Este processo é feito multiplicando os vértices por uma matriz chamada viewport. 
Essa matriz leva os vértices do espaço canônico para o espaço da tela e é formada pela 
multiplicação das matrizes.

6° - Rasterização 

# Funções desenvolvidas:

// Cria um menu com todos os objetos(.OBJ) carregados para exibição na tela:
----------------------------------------------------------------------------------------------------------------------------------------
void createMenu(void){} 

// Mostra o .OBJ na tela de acordo com a escolha do usuário, definindo o ângulo de abertura da câmera e o aspecto da imagem:
----------------------------------------------------------------------------------------------------------------------------------------
void display(void) {}

// Função que imprime as coordenadas de um vértice.
----------------------------------------------------------------------------------------------------------------------------------------
void printVector(obj_vector *v) {}

// No main, os arquivos são carregados a partir de um file(.cpp) e uma file(.h) chamadas objLoader() e outro obj_parser(.cpp e .h) que // lida com a entrada dos dados, caso o carregamento do modelo dê erro:
----------------------------------------------------------------------------------------------------------------------------------------
int main(int argc, char **argv) {} 

----------------------------------------------------------------------------------------------------------------------------------------
objData = new objLoader();			// cria o objeto que carrega o modelo
//objData->load("monkey_head2.obj");	// a carga do modelo é indicada através do nome do arquivo.
// Neste caso, deve ser sempre do tipo OBJ.

# TRANSFORMAÇÕES DE ESPAÇOS
# RESULTADOS DAS IMPLEMENTAÇÕES 

Neste projeto foi solicitado a implementação das transformações que levam vértices
descritos originalmente no espaço do objeto para o espaço de tela. Para esta
implementação foi fornecido pelo professor da disciplina um arquivo do tipo .OBJ,
contendo os dados de vértices de um objeto, a saber, o arquivo ”monkey_head2.obj”.
Foi fornecida, também, uma biblioteca simples para carga de modelos descritos em .OBJ
(Wavefront .obj)

De posse destes arquivos, foi desenvolvido na IDE do Code::Blocks, utilizando a
biblioteca OpenGL e suas bibliotecas auxiliares, um sistema capaz de ler os dados do
arquivo fornecido e, através dos processos de renderização do Pipeline Gráfico, exibir o
resultado na tela do computador.
O resultado obtido na renderização pode ser verificado na Figura 26, a seguir: 

Objeto: Monkey Head (Cabeça de Macaco)

![Imagem - Monkey](https://user-images.githubusercontent.com/46049252/56478728-c3367780-6487-11e9-99e3-bbd494e8a43a.png)

Visando verificar a consistência do seu funcionamento foi utilizado também, para leitura de arquivos .OBJ e renderização de outros objetos. 

Para isto, no sistema, foi implementado e incluído um módulo de Menus Popup’s,
na tela principal, de modo a organizar o processamento
dos diversos objetos renderizados e exibidos na tela do computador. Os arquivos .OBJ’s
dos diversos objetos foram obtidos através de downloads de um site na internet, cujo link
está referenciado no final deste projeto. 

![TelaPrincipal](https://user-images.githubusercontent.com/46049252/56478900-a189c000-6488-11e9-8e50-fa0ca60b4690.png)

# RESULTADOS DE RENDERIZAÇÃO DE OUTROS OBJETOS

Sendo assim, os resultados obtidos se assemelham, levando em conta a rasterização de linhas dos arquivos .obj.
Os resultados obtidos são os mostrados nas imagens abaixo:

Objeto: TorreDiPizza (Torre de Pizza) 

![Imagem - Torre](https://user-images.githubusercontent.com/46049252/56478934-c716c980-6488-11e9-84eb-876c30cbc8d2.png)

Objeto: Pyramid (Pirâmide) 

![Imagem - Piramide](https://user-images.githubusercontent.com/46049252/56478935-ca11ba00-6488-11e9-9b10-0096d0cf65ac.png)

Objeto: Power_lines (linhas de Energia) 

![Imagem - LinhaTransmissao](https://user-images.githubusercontent.com/46049252/56478938-d0a03180-6488-11e9-8b3e-9253a59bd091.png)

Objeto: Cow (Vaca) 

![Imagem - Vaca](https://user-images.githubusercontent.com/46049252/56478942-d4cc4f00-6488-11e9-88a9-8259b0dd0964.png)

Objeto: icosahedron (icosaedro) 

![Imagem - Isoedro](https://user-images.githubusercontent.com/46049252/56478947-d8f86c80-6488-11e9-9fdf-4cfc47542732.png)

Objeto: Sphere (Esfera) 

![Imagem - Esfera](https://user-images.githubusercontent.com/46049252/56478950-db5ac680-6488-11e9-97bf-394a2a300a7c.png)

Objeto: Cone 

![Imagem - Cone](https://user-images.githubusercontent.com/46049252/56478952-df86e400-6488-11e9-91cb-40d980ced573.png)

Objeto: Coliseu 

![Imagem - Coliseu](https://user-images.githubusercontent.com/46049252/56478955-e31a6b00-6488-11e9-9be1-2c2ec22dc9d8.png)

Objeto: Horse (Cavalo) 

![Imagem - Cavalo](https://user-images.githubusercontent.com/46049252/56478958-e6155b80-6488-11e9-8f02-470461fe2f89.png)

Objeto: Gourd (cabaça) 

![Imagem - Cabaca](https://user-images.githubusercontent.com/46049252/56478963-e9a8e280-6488-11e9-8dc3-ee8e9bf713b8.png)

----------------------------------------------------------------------------------------------------------------------------------------

# OBs: 
Nos arquivos, também encontrada-se um documento .pdf com mais especificações do trabalho.

# Dificuldades encontradas:
Perspectivas de visualização na tela.

# REFERÊNCIAS

1 – Tutorial de Utilização de OpenGl – Marcionílio Barbosa Sobrinho – Belo Horizonte –
MG – 2003

2 – Introdução à OpenGL - Professora Isabel Harb Manssour –
https://www.inf.pucrs.br/~manssour/OpenGL/Desenhando.html.
 Acesso em: 24/02/2019
