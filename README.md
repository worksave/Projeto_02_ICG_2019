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
2° - Transformação: Espaço do Universo → Espaço da Câmera 
3° - Transformação: Espaço da Câmera → Espaço Projetivo ou de Recorte
4° - Transformação: Espaço de Recorte → Espaço "Canônico" 
5° - Transformação: Espaço Canônico → Espaço de Tela 
6° - Rasterização 

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


