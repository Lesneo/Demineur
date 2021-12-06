/** negro
 * @file probleme.h
 * Projet SDA
 * @author Regenwetter Simon et Talagrand Alban
 * @version 2 30/11/2021
 * @brief Projet SDA d�mineur - Produire un probleme
 * Structures de donnees et algorithmes - BUT 1 Paris 16
 */
#pragma once

/** @brief Produit un probl�me
 *  @param [in] ligne le nombre de lignes
 *  @param [in] colonne le nombre de colonnes
 *	@param [in] nbMine le nombre de mines
 *  @pre nbMine < (ligne*colonne)
 */
void Create(unsigned int ligne, unsigned int colonne, unsigned int nbMine);