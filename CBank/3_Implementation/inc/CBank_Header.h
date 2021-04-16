/**
 * @file CBank_Header.h
 * @author {Aditya} ({gautamaditya99@gmail.com})
 * @brief 
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _cbank_
void admin();
void main_screen();
void bank_menu();
void create_new_account();
void edit_details();
void compute_transaction();
float compute_interest(float t, float amount, int rate);
void compute_delay(int j);
void view_list();
void erase_details();
void see_details();
void close_application();
#endif