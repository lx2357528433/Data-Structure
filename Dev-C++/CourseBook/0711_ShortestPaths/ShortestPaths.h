/*====================
 * ���·���㷨
 *
 * �����㷨: 7.15��7.16
 =====================*/

#ifndef SHORTESTPATHS_H
#define SHORTESTPATHS_H

#include <stdio.h>
#include "Status.h"    //**��01 ����**//
#include "MGraph.h"    //**��07 ͼ**//


// Dijkstra�㷨�е����·��������һ����ά����
typedef Boolean PathMatrix_DIJ[MAX_VERTEX_NUM][MAX_VERTEX_NUM];
// Dijkstra�㷨�е����·�����ۣ��ô��ۿ����ǲ����ͣ�Ҳ������Ȩֵ��
typedef int ShortPathTable_DIJ[MAX_VERTEX_NUM];

// Floyd�㷨�е����·��������һ����ά����
typedef Boolean PathMatrix_FLOYD[MAX_VERTEX_NUM][MAX_VERTEX_NUM][MAX_VERTEX_NUM];
// Floyd�㷨�е����·�����ۣ��ô��ۿ����ǲ����ͣ�Ҳ������Ȩֵ��
typedef int ShortPathTable_FLOYD[MAX_VERTEX_NUM][MAX_VERTEX_NUM];


/*
 * ���������������� �㷨7.15 ����������������
 *
 * �Ͻ�˹����(Dijkstra)�㷨��Դ���·��
 *
 * @param G  ��������ͼ��
 * @param v0 ��Դ���·������㡣
 * @param P  �洢��v0���������������·����Ϣ��
 *           P[j][k]==TRUE������v0->j�����·���ᾭ������k�����򣬴�����������
 *           ע��������ֻ��ӳ�˶���Ĵ����ԣ���δ��ӳ������·���ϵĴ���
 * @param D  �洢��v0���������������·�����ۣ���ͼ�У��ô����ǲ����ͣ������У��ô�����Ȩֵ�͡�
 */
void ShortestPath_DIJ(MGraph G, int v0, PathMatrix_DIJ P, ShortPathTable_DIJ D);

/*
 * ��ӡʹ�õϽ�˹����(Dijkstra)�㷨��ȡ�ĵ�Դ���·��
 */
void PrintPath_DIJ(MGraph G, int v0, PathMatrix_DIJ P, ShortPathTable_DIJ D);

/*
 * ���������������� �㷨7.16 ����������������
 *
 * ��������(Floyd)�㷨���Դ���·��
 *
 * @param G  ��������ͼ��
 * @param P  �洢���Զ���֮������·����Ϣ��
 *           P[i][j][k]==TRUE������i->j�����·���ᾭ������k�����򣬴�����������
 *           ע��������ֻ��ӳ�˶���Ĵ����ԣ���δ��ӳ������·���ϵĴ���
 * @param D  �洢���Զ���֮������·�����ۣ���ͼ�У��ô����ǲ����ͣ������У��ô�����Ȩֵ�͡�
 */
void ShortestPath_FLOYD(MGraph G, PathMatrix_FLOYD P, ShortPathTable_FLOYD D);

/*
 * ��ӡʹ�ø�������(Floyd)�㷨��ȡ�ĵ�Դ���·��
 */
void PrintPath_FLOYD(MGraph G, PathMatrix_FLOYD P, ShortPathTable_FLOYD D);

/*
 * ��ӡ��a��b��·������·���Ķ�����Ϣλ��P��
 */
static void PrintPath(MGraph G, int a, int b, Boolean P[MAX_VERTEX_NUM]) ;

/*
 * ���ù��Ԥ�������ҵ�һ����pre��b��·������·����·�������ж���λ��vexs�У��ҳ���·���洢��path��
 */
static Status Find(MGraph G, int pre, int b, int vexs[MAX_VERTEX_NUM], int path[MAX_VERTEX_NUM]);

#endif