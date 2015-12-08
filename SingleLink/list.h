/*************************************************************************
	> File Name: list.h
	> Author: 
	> Mail: 
	> Created Time: Sun 06 Dec 2015 12:34:54 AM PST
 ************************************************************************/

#ifndef _LIST_H
#define _LIST_H
typedef int item;
typedef struct node *link; //定义节点指针
typedef struct node //节点定义
{
    item data; //数据域
    link next; //链域
}NODE;
link make_head(link l); //生成新空链表L
int is_empty(link l); //判断链表是否为空
void add_tail(link p,item data);
void print_link(link p);
link search(link l,item data);
void insert(link pos,item data,item value);
void modify(link l,item data,item value);
void delete(link l,item data);
link destory(link l);

#endif



