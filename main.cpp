
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include <stdio.h>
#include "objLoader.h"

// Ponteiro para o objeto que carregará o modelo 3D (formato OBJ).
objLoader *objData;

unsigned int comprimentoDaTela = 800;
unsigned int alturaDaTela = 600;

// Dimensoes da Viewport
unsigned int ViewPortWidth  = 512;
unsigned int ViewPortHeight = 512;

// Coordenadas de Origem da Viewport
unsigned int ViewPortOrigemEixo_X  = (comprimentoDaTela - ViewPortWidth)/2;
unsigned int ViewPortOrigemEixo_Y = (alturaDaTela - ViewPortHeight)/2;


static int window;
static int menu_id;
static int submenu_id;
static int value = 0;

void menu(int num){

  if(num == 0){

     exit(0);


  } else {

            value = num;

  }
  glutPostRedisplay();

}

void createMenu(void){

    submenu_id = glutCreateMenu(menu);

    glutAddMenuEntry("Monkey Head - Cabeca de Macaco", 2);
    glutAddMenuEntry("Torre di Pizza", 3);
    glutAddMenuEntry("Esfera", 4);
    glutAddMenuEntry("Partenon (Templo em Atenas – Grécia Antiga)", 5);
    glutAddMenuEntry("Cabaca", 6);
    glutAddMenuEntry("Piramide", 7);

    glutAddMenuEntry("Cavalo", 8);

    glutAddMenuEntry("Vaca", 9);

    glutAddMenuEntry("Icosaedro", 10);

    glutAddMenuEntry("Linhas de Transmissao", 11);

    glutAddMenuEntry("Cone", 12);



    //glutAddMenuEntry("Cone", 13);

/*glutAddMenuEntry("Aviao Cesnna", 16);*/






    menu_id = glutCreateMenu(menu);

    glutAddMenuEntry("Clear", 1);
    glutAddSubMenu("Draw", submenu_id);
    glutAddMenuEntry("Quit", 0);

    glutAttachMenu(GLUT_RIGHT_BUTTON);

}

//-----------------------------------------------------------------------------
void display(void) {

    //createMenu();
    glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);





       //glClearColor(0.0,0.0,0.0,0.0);
      // exit(0);


    // Chama a Funcao Menu
	if(value == 1) {

       //glClearColor(0.0,0.0,0.0,0.0);

       //glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

       glClear(GL_COLOR_BUFFER_BIT);

       return; //glutPostRedisplay();

    } else if(value == 2) {

              glClear(GL_COLOR_BUFFER_BIT);

        //glPushMatrix();
            /*glColor3d(0.0, 1.0, 0.0);
            glRotated(65, -1.0, 0.0, 0.0);
            glutWireCone(0.5, 1.0, 50, 50);
            glPopMatrix();*/

               /*glPushMatrix();
               glColor3d(1.0, 0.0, 0.0);
               glutWireSphere(0.5, 50, 50);
               glPopMatrix();*/

               //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\al.obj");
               //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\monkey_head2.obj");
               //objData->load("C:\\Users\\Magno\\Downloads\\ICG_Trabalho_02_2018 (1)\\ICG_Trabalho_02_2018\\Obj_Loader)";
               //objData->load("D:\\ICG_Trabalho_02_2019\\Obj_Loader");
               //objData->load("D:\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\monkey_head2.obj");
               objData->load("C:\\Users\\Manu\\Desktop\\Trabalho2-icg\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\monkey_head2.obj");


                              //D:\\ICG_Trabalho_02_2019\Obj_Loader

               //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\cube.obj");
               //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\humanoid_quad.obj");
               //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\cube.obj");
               //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\cone.obj");


               //atexit(FreeMemFunc);

     } else if(value == 3) {

               glClear(GL_COLOR_BUFFER_BIT);

               /*glPushMatrix();
               glColor3d(0.0, 1.0, 0.0);
               glRotated(65, -1.0, 0.0, 0.0);
               glutWireCone(0.5, 1.0, 50, 50);
               glPopMatrix();*/
               //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\torreDiPisa.obj");
               //objData->load("D:\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\torreDiPisa.obj");
               objData->load("C:\\Users\\Manu\\Desktop\\Trabalho2-icg\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\torreDiPisa.obj");


     /*} else if(value == 4) {

               /*glPushMatrix();
               glColor3d(0.0, 0.0, 1.0);
               glutWireTorus(0.3,0.6,100,100);
               glPopMatrix();*/
              // objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\whale.obj");*/

     } else if(value == 4) {


                glClear(GL_COLOR_BUFFER_BIT);
               /*glPushMatrix();
               glColor3d(1.0, 0.0, 1.0);
               glutSolidTeapot(0.5);
               glPopMatrix();*/
               // Modelo de Objeto: Sphere
               //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\sphere.obj");
               //objData->load("D:\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\sphere.obj");
               objData->load("C:\\Users\\Manu\\Desktop\\Trabalho2-icg\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\sphere.obj");


     } else if(value == 5) {

               glClear(GL_COLOR_BUFFER_BIT);

               /*glPushMatrix();
               glColor3d(1.0, 0.0, 1.0);
               glutSolidTeapot(0.5);
               glPopMatrix();*/
               // Modelo de Objeto: Pyramid
               //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\partenon.obj");
               //objData->load("D:\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\partenon.obj");
               objData->load("C:\\Users\\Manu\\Desktop\\Trabalho2-icg\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\partenon.obj");

     } else if(value == 6) {

               glClear(GL_COLOR_BUFFER_BIT);
               /*glPushMatrix();
               glColor3d(1.0, 0.0, 1.0);
               glutSolidTeapot(0.5);
               glPopMatrix();*/
               // Modelo de Objeto: Pyramid
               //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\gourd.obj");
               //objData->load("D:\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\gourd.obj");
               objData->load("C:\\Users\\Manu\\Desktop\\Trabalho2-icg\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\gourd.obj");


     } else if(value == 7) {

               glClear(GL_COLOR_BUFFER_BIT);
               /*glPushMatrix();
               glColor3d(1.0, 0.0, 1.0);
               glutSolidTeapot(0.5);
               glPopMatrix();*/
               // Modelo de Objeto: Pyramid
               //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\pyramid.obj");
               //objData->load("D:\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\pyramid.obj");
               objData->load("C:\\Users\\Manu\\Desktop\\Trabalho2-icg\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\pyramid.obj");


     } else if(value == 8) {

               glClear(GL_COLOR_BUFFER_BIT);

               /*glPushMatrix();
               glColor3d(1.0, 0.0, 1.0);
               glutSolidTeapot(0.5);
               glPopMatrix();*/
               // Modelo de Objeto: Pyramid

               // Modelo de Objeto: Horse134
               //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\horse134.obj");
               //objData->load("D:\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\horse134.obj");
               objData->load("C:\\Users\\Manu\\Desktop\\Trabalho2-icg\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\horse134.obj");




     } else if(value == 9) {

               glClear(GL_COLOR_BUFFER_BIT);
               /*glPushMatrix();
               glColor3d(1.0, 0.0, 1.0);
               glutSolidTeapot(0.5);
               glPopMatrix();*/
               // Modelo de Objeto: Pyramid
               //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\cow.obj");
               //objData->load("D:\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\cow.obj");
               objData->load("C:\\Users\\Manu\\Desktop\\Trabalho2-icg\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\cow.obj");

     } else if(value == 10) {

               /*glPushMatrix();
               glColor3d(1.0, 0.0, 1.0);
               glutSolidTeapot(0.5);
               glPopMatrix();*/
               // Modelo de Objeto: Pyramid
               //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\icosahedron.obj");
               //objData->load("D:\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\icosahedron.obj");
               objData->load("C:\\Users\\Manu\\Desktop\\Trabalho2-icg\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\icosahedron.obj");

     /*} else if(value == 13) {

             glClear(GL_COLOR_BUFFER_BIT);
               /*glPushMatrix();
               glColor3d(1.0, 0.0, 1.0);
               glutSolidTeapot(0.5);
               glPopMatrix();*/
               // Modelo de Objeto: Pyramid

             //  objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\violin_case.obj")*/


     /*} else if(value == 12) {

               glClear(GL_COLOR_BUFFER_BIT);
               /*glPushMatrix();
               glColor3d(1.0, 0.0, 1.0);
               glutSolidTeapot(0.5);
               glPopMatrix();*/
               // Modelo de Objeto: Pyramid
             //  objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\lamp.obj");

     } else if(value == 11) {

               glClear(GL_COLOR_BUFFER_BIT);
               /*glPushMatrix();
               glColor3d(1.0, 0.0, 1.0);
               glutSolidTeapot(0.5);
               glPopMatrix();*/
               // Modelo de Objeto: Pyramid
               //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\power_lines.obj");
               //objData->load("D:\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\power_lines.obj");
               objData->load("C:\\Users\\Manu\\Desktop\\Trabalho2-icg\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\power_lines.obj");

     } else if(value == 12) {

               glClear(GL_COLOR_BUFFER_BIT);
               /*glPushMatrix();
               glColor3d(1.0, 0.0, 1.0);
               glutSolidTeapot(0.5);
               glPopMatrix();*/
               // Modelo de Objeto: Pyramid
               //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\cone.obj");
               //objData->load("D:\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\cone.obj");
               objData->load("C:\\Users\\Manu\\Desktop\\Trabalho2-icg\\ICG_Trabalho_02_2019\\Obj_Loader\\modelos_OBJ\\cone.obj");

     }

	//glViewport(0, 0, ViewPortWidth, ViewPortHeight);

	glViewport(ViewPortOrigemEixo_X, ViewPortOrigemEixo_Y, ViewPortWidth, ViewPortHeight);

	glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

	glMatrixMode(GL_PROJECTION);
  	glLoadIdentity();
	gluPerspective(	55.0f, 								// angulo de abertura da camera
					(float)ViewPortWidth/ViewPortWidth, // aspecto da imagem
					1.0f, 								// near plane
					50.0f);								// far plane

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	gluLookAt(	0.0f, 0.0f, 4.0f,	// posição da câmera
				0.0f, 0.0f, 0.0f,	// ponto para o qual a camera está olhando
				0.0f, 1.0f, 0.0f);	// vetor "up"

	///////////////////////////////////////////////////////////////////////////
	// Desenha os eixos do sistema de coordenadas do universo
	// Vermelho: eixo X
	// Verde: eixo Y
	// Azul: eixo Z
	///////////////////////////////////////////////////////////////////////////

	glBegin(GL_LINES);

		glColor3f(1.0f, 0.0f, 0.0f);	// eixo X
		glVertex3f(0.0f, 0.0f, 0.0f);
		glVertex3f(2.0f, 0.0f, 0.0f);

		glColor3f(0.0f, 1.0f, 0.0f);	// eixo Y
		glVertex3f(0.0f, 0.0f, 0.0f);
		glVertex3f(0.0f, 2.0f, 0.0f);

		glColor3f(0.0f, 0.0f, 1.0f);	// eixo Z
		glVertex3f(0.0f, 0.0f, 0.0f);
		glVertex3f(0.0f, 0.0f, 2.0f);

	glEnd();

	///////////////////////////////////////////////////////////////////////////
	// Desenha o modelo carregado utilizando linhas brancas.
	// Cada volta do loop desenha um triangulo, formado por tres linhas.
	// Cada linha eh formada por 2 pontos (inicial e final).
	///////////////////////////////////////////////////////////////////////////

	glColor3f(1.0f, 1.0f, 1.0f);

	glBegin(GL_LINES);

		for(int i=0; i<objData->faceCount; i++) {

			obj_face *o = objData->faceList[i];

			glVertex3f(	objData->vertexList[o->vertex_index[0]]->e[0], // primeira linha
						objData->vertexList[o->vertex_index[0]]->e[1],
						objData->vertexList[o->vertex_index[0]]->e[2]);
			glVertex3f(	objData->vertexList[o->vertex_index[1]]->e[0],
						objData->vertexList[o->vertex_index[1]]->e[1],
						objData->vertexList[o->vertex_index[1]]->e[2]);

			glVertex3f(	objData->vertexList[o->vertex_index[1]]->e[0],	// segunda linha
						objData->vertexList[o->vertex_index[1]]->e[1],
						objData->vertexList[o->vertex_index[1]]->e[2]);
			glVertex3f(	objData->vertexList[o->vertex_index[2]]->e[0],
						objData->vertexList[o->vertex_index[2]]->e[1],
						objData->vertexList[o->vertex_index[2]]->e[2]);

			glVertex3f(	objData->vertexList[o->vertex_index[2]]->e[0],	// terceira linha
						objData->vertexList[o->vertex_index[2]]->e[1],
						objData->vertexList[o->vertex_index[2]]->e[2]);
			glVertex3f(	objData->vertexList[o->vertex_index[0]]->e[0],
						objData->vertexList[o->vertex_index[0]]->e[1],
						objData->vertexList[o->vertex_index[0]]->e[2]);
		}

	glEnd();


	glFlush();
	glutSwapBuffers();
	glutPostRedisplay();

}

//-----------------------------------------------------------------------------
// Funcao que imprime as coordenadas de um vertice.
// Pode ser utilizada para fazer debug de código.
void printVector(obj_vector *v) {

	printf("%.2f,", v->e[0] );
	printf("%.2f,", v->e[1] );
	printf("%.2f  ", v->e[2] );

}

//-----------------------------------------------------------------------------
// Esta funcao apenas imprime informacoes referentes ao modelo que foi carregado,
// tais como numero de vertices, normais, fontes de luz, etc.
void PrintModelInfo(objLoader* ptr) {

	printf("Number of vertices: %i\n", ptr->vertexCount);
	printf("Number of vertex normals: %i\n", ptr->normalCount);
	printf("Number of texture coordinates: %i\n", ptr->textureCount);
	printf("\n");

	printf("Number of faces: %i\n", ptr->faceCount);
	for(int i=0; i<ptr->faceCount; i++) {

		obj_face *o = ptr->faceList[i];
		printf(" face ");
		for(int j=0; j<3; j++) {

			printVector(ptr->vertexList[ o->vertex_index[j] ]);

		}
		printf("\n");

	}

	printf("\n");

	printf("Number of spheres: %i\n", ptr->sphereCount);
	for(int i=0; i<ptr->sphereCount; i++) {

		obj_sphere *o = ptr->sphereList[i];
		printf(" sphere ");
		printVector(ptr->vertexList[ o->pos_index ]);
		printVector(ptr->normalList[ o->up_normal_index ]);
		printVector(ptr->normalList[ o->equator_normal_index ]);
		printf("\n");

	}

	printf("\n");

	printf("Number of planes: %i\n", ptr->planeCount);
	for(int i=0; i<ptr->planeCount; i++) {

		obj_plane *o = ptr->planeList[i];
		printf(" plane ");
		printVector(ptr->vertexList[ o->pos_index ]);
		printVector(ptr->normalList[ o->normal_index]);
		printVector(ptr->normalList[ o->rotation_normal_index]);
		printf("\n");

	}

	printf("\n");

	printf("Number of point lights: %i\n", ptr->lightPointCount);
	for(int i=0; i<ptr->lightPointCount; i++) {

		obj_light_point *o = ptr->lightPointList[i];
		printf(" plight ");
		printVector(ptr->vertexList[ o->pos_index ]);
		printf("\n");

	}

	printf("\n");

	printf("Number of disc lights: %i\n", ptr->lightDiscCount);
	for(int i=0; i<ptr->lightDiscCount; i++) {

		obj_light_disc *o = ptr->lightDiscList[i];
		printf(" dlight ");
		printVector(ptr->vertexList[ o->pos_index ]);
		printVector(ptr->normalList[ o->normal_index ]);
		printf("\n");

	}

	printf("\n");

	printf("Number of quad lights: %i\n", ptr->lightQuadCount);
	for(int i=0; i<ptr->lightQuadCount; i++) {

		obj_light_quad *o = ptr->lightQuadList[i];
		printf(" qlight ");
		printVector(ptr->vertexList[ o->vertex_index[0] ]);
		printVector(ptr->vertexList[ o->vertex_index[1] ]);
		printVector(ptr->vertexList[ o->vertex_index[2] ]);
		printVector(ptr->vertexList[ o->vertex_index[3] ]);
		printf("\n");

	}

	printf("\n");

	if(ptr->camera != NULL) {

		printf("Found a camera\n");
		printf(" position: ");
		printVector(ptr->vertexList[ ptr->camera->camera_pos_index ]);
		printf("\n looking at: ");
		printVector(ptr->vertexList[ ptr->camera->camera_look_point_index ]);
		printf("\n up normal: ");
		printVector(ptr->normalList[ ptr->camera->camera_up_norm_index ]);
		printf("\n");

	}

	printf("\n");

	printf("Number of materials: %i\n", ptr->materialCount);
	for(int i=0; i<ptr->materialCount; i++) {

		obj_material *mtl = ptr->materialList[i];
		printf(" name: %s", mtl->name);
		printf(" amb: %.2f ", mtl->amb[0]);
		printf("%.2f ", mtl->amb[1]);
		printf("%.2f\n", mtl->amb[2]);

		printf(" diff: %.2f ", mtl->diff[0]);
		printf("%.2f ", mtl->diff[1]);
		printf("%.2f\n", mtl->diff[2]);

		printf(" spec: %.2f ", mtl->spec[0]);
		printf("%.2f ", mtl->spec[1]);
		printf("%.2f\n", mtl->spec[2]);

		printf(" reflect: %.2f\n", mtl->reflect);
		printf(" trans: %.2f\n", mtl->trans);
		printf(" glossy: %i\n", mtl->glossy);
		printf(" shiny: %i\n", mtl->shiny);
		printf(" refact: %.2f\n", mtl->refract_index);

		printf(" texture: %s\n", mtl->texture_filename);
		printf("\n");

	}

	printf("\n");

	//vertex, normal, and texture test
	if(ptr->textureCount > 2 && ptr->normalCount > 2 && ptr->faceCount > 2) {

		printf("Detailed face data:\n");

		for(int i=0; i<3; i++) {

			obj_face *o = ptr->faceList[i];
			printf(" face ");
			for(int j=0; j<3; j++) {

				printf("%i/", o->vertex_index[j] );
				printf("%i/", o->texture_index[j] );
				printf("%i ", o->normal_index[j] );

			}
			printf("\n");

		}
	}
}

//-----------------------------------------------------------------------------
// Libera a memoria do objeto responsavel por guardar dados do modelo.
void FreeMemFunc(void) {

	std::clog << "Exiting...\n";

	if (!objData)
		delete objData;

}

//-----------------------------------------------------------------------------
// Programa principal
int main(int argc, char **argv) {

	objData = new objLoader();			// cria o objeto que carrega o modelo
	//objData->load("monkey_head2.obj");	// a carga do modelo é indicada atraves do nome do arquivo.
										// Neste caso, deve ser sempre do tipo OBJ.

    //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\monkey_head2.obj");
    // Modelo de Objeto: Macaco
   /* ViewPortWidth  = 512;
    ViewPortHeight = 512;
    objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\monkey_head2.obj");
   */
    //
    // Modelo de Objeto: Carro

    //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\car.obj");
    //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\torreDiPisa.obj");

    //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\teapot.obj");


    // Modelo de Objeto: Cone
    //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\cube2.obj");

   //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\zero.obj");


      // objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\al.obj");

        //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\icosahedron.obj");


        //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\violin_case.obj");

        //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\trumpet.obj");
       // objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\sandal.obj");
      // objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\lamp.obj");


        //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\diamond.obj");

        //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\humanoid_tri.obj");

    //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\humanoid_quad.obj");

        //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\gourd.obj");

        //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\cessna.obj");

        //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\cessna.obj");


      //// objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\al.obj");

       //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\power_lines.obj");




        //M:\Ambiente de Trabalho\Obj_Loader\modelos_OBJ

    // Modelo de Objeto: Cow
    //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\cow.obj");

    // Modelo de Objeto: Cubo
    //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\cube.obj");


    // Modelo de Objeto: Horse134
    //bjData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\horse134.obj");

    // Modelo de Objeto: parthenon
    //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\partenon.obj");


    // Modelo de Objeto: Pyramid
    //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\pyramid.obj");


    // Modelo de Objeto: Sphere
    //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\sphere.obj");



    // Modelo de Objeto: Teapot1
    //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\teapot1.obj");


    // Modelo de Objeto: torreDiPisa
    //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\torreDiPisa.obj");

    // Modelo de Objeto: whale(Baleia)
    //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\whale.obj");

    // Modelo de Objeto: whale(Baleia)
    //objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\monkey_head2.obj");

    // objData->load("M:\\Ambiente de Trabalho\\Obj_Loader\\modelos_OBJ\\lamp.obj");
    //M:\Ambiente de Trabalho\Obj_Loader\modelos_OBJ

	// Habilite esta função se você deseja imprimir na tela dados do modelo
	// gerados durante a sua carga.
	//PrintModelInfo(objData);


	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
	//glutInitWindowSize(512, 512);
	glutInitWindowSize(comprimentoDaTela, alturaDaTela);
	//glutInitWindowPosition(100,100);
	glutInitWindowPosition(1, 1);
	glutCreateWindow("ICG - Trabalho 2 - Carlos Magno da Silva - Mat. 20160143331 e Emmanuella  - Mat. 20170002239");

    createMenu();
    glClearColor(0.0,0.0,0.0,0.0);

	glutDisplayFunc(display);

	atexit(FreeMemFunc);

	glutMainLoop();

	return EXIT_SUCCESS;
}

