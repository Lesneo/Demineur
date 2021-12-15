#pragma once
#ifndef _PARTIEGAGNE_
#define  _PARTIEGAGNE_


#include <iostream>
#include "tableau.h"
#include "PartieGagne.h"
#include "Grille.h"

/**
 * @brief Renvoie si une partie est gagn� ou pas
 * @param [in] grille : la grille
 * @param [in] mines : le conteneur de mines
 * @return partie gagn� ou non
 */
bool estGagne(Grille grille, Conteneur mines);


#endif