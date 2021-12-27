#pragma once
#ifndef _ETATPARTIE_
#define  _ETATPARTIE_


#include <iostream>
#include "probleme.h"
#include "ProdGrille.h"

/**
 * @brief Renvoie si une partie est gagn� ou non
 * @param[in] grille : la grille
 * @param[in] mines : le conteneur de mines
 * @return partie gagn� ou non
 */
bool estGagne(Grille grille, Conteneur mines);

/**
 * @brief Renvoie si une partie est perdu ou non
 * @param[in] grille : la grille
 * @param[in] mines : le conteneur de mines
 * @return partie gagn� ou non
 */
bool estPerdu(Grille grille, Conteneur mines);

#endif