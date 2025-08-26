#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "PotionRecipe.h"
using namespace std;

// AlchemyWorkshop Ŭ����: ������ ����� ����
class AlchemyWorkshop {
private:
    vector<PotionRecipe> recipes;

public:
    // addRecipe �޼���: ��� ���(vector)�� �Ű������� �޵��� ����
    void addRecipe(const string& name, const vector<string>& ingredients) {
        recipes.push_back(PotionRecipe(name, ingredients));
        cout << ">> ���ο� ������ '" << name << "'��(��) �߰��Ǿ����ϴ�." << endl;
    }

    // ��� ������ ��� �޼���
    void displayAllRecipes() const {
        if (recipes.empty()) {
            cout << "���� ��ϵ� �����ǰ� �����ϴ�." << endl;
            return;
        }

        cout << "\n--- [ ��ü ������ ��� ] ---" << endl;
        for (size_t i = 0; i < recipes.size(); ++i) {
            cout << "- ���� �̸�: " << recipes[i].potionName << endl;
            cout << "  > �ʿ� ���: ";

            // ��� ����� ��ȸ�ϸ� ���
            for (size_t j = 0; j < recipes[i].ingredients.size(); ++j) {
                cout << recipes[i].ingredients[j];
                // ������ ��ᰡ �ƴϸ� ��ǥ�� ����
                if (j < recipes[i].ingredients.size() - 1) {
                    cout << ", ";
                }
            }
            cout << endl;
        }
        cout << "---------------------------\n";
    }
    void FindbyRacipesName(string name)
    {
        if (recipes.empty()) {
            cout << "���� ��ϵ� �����ǰ� �����ϴ�." << endl;
            return;
        }
        cout << "\n--- [ ã�� ������ ��� ] ---" << endl;
        for (size_t i = 0; i < recipes.size(); i++)
        {
            if (recipes[i].potionName == name)
            {    
                cout << "- ���� �̸�: " << recipes[i].potionName << endl;
                cout << "  > �ʿ� ���: ";

                // ��� ����� ��ȸ�ϸ� ���
                for (size_t j = 0; j < recipes[i].ingredients.size(); ++j) {
                    cout << recipes[i].ingredients[j];
                    // ������ ��ᰡ �ƴϸ� ��ǥ�� ����
                    if (j < recipes[i].ingredients.size() - 1) {
                        cout << ", ";
                    }
                }
            }

            else
            {
                cout << "ã�� �����ǰ� �� �̻� �����ϴ�." << endl;
                return;
            }
            cout << endl;

        }
        cout << "---------------------------\n";
    }
    void FindbyRecipesIngredient(string Ingredient)
    {
        if (recipes.empty()) {
            cout << "���� ��ϵ� �����ǰ� �����ϴ�." << endl;
            return;
        }
        cout << "\n--- [ ã�� ������ ��� ] ---" << endl;
        for (size_t i = 0; i < recipes.size(); i++)
        {
            
            if (find(recipes[i].ingredients.begin(), recipes[i].ingredients.end(), Ingredient) != recipes[i].ingredients.end())
            {

                cout << "- ���� �̸�: " << recipes[i].potionName << endl;
                cout << "  > �ʿ� ���: ";

                // ��� ����� ��ȸ�ϸ� ���
                for (size_t j = 0; j < recipes[i].ingredients.size(); ++j) {
                    cout << recipes[i].ingredients[j];
                    // ������ ��ᰡ �ƴϸ� ��ǥ�� ����
                    if (j < recipes[i].ingredients.size() - 1) {
                        cout << ", ";
                    }
                }
                cout << endl;
            }
            
            else
            {
                cout << "ã�� �����ǰ� �����ϴ�." << endl;
                return;
            }
        }
        cout << "---------------------------\n";
        
    }
};