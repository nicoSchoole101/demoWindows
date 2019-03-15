#pragma once
#include <msclr/marshal_cppstd.h>
#include "employe.h"
#include "donnees.h"
#include "tache.h"

namespace employes {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//impossible de déclarer un objet C++ standard dans une class .net
	//il faut donc le faire avant le début de la classe

	Donnees lesDonneesDuProgramme;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnRechercherEmploye;

	private: System::Windows::Forms::Button^  btnAjoutEmploye;
	private: System::Windows::Forms::TextBox^  txtVille;
	private: System::Windows::Forms::TextBox^  txtPrenom;
	private: System::Windows::Forms::TextBox^  txtNom;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  btnRechercherTache;

	private: System::Windows::Forms::Button^  btnAjouterTache;
	private: System::Windows::Forms::TextBox^  txtDuree;
	private: System::Windows::Forms::TextBox^  txtTitre;



	private: System::Windows::Forms::TextBox^  txtIdentifiant;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  txtNumero;
	private: System::Windows::Forms::TextBox^  txtNas;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  txtEtat;
	private: System::Windows::Forms::TextBox^  txtMesure;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnRechercherEmploye = (gcnew System::Windows::Forms::Button());
			this->btnAjoutEmploye = (gcnew System::Windows::Forms::Button());
			this->txtVille = (gcnew System::Windows::Forms::TextBox());
			this->txtPrenom = (gcnew System::Windows::Forms::TextBox());
			this->txtNom = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnRechercherTache = (gcnew System::Windows::Forms::Button());
			this->btnAjouterTache = (gcnew System::Windows::Forms::Button());
			this->txtDuree = (gcnew System::Windows::Forms::TextBox());
			this->txtTitre = (gcnew System::Windows::Forms::TextBox());
			this->txtIdentifiant = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtNumero = (gcnew System::Windows::Forms::TextBox());
			this->txtNas = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtEtat = (gcnew System::Windows::Forms::TextBox());
			this->txtMesure = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(97, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 13);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Ville";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(97, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 13);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Prénom";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(97, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 13);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Nom";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnRechercherEmploye
			// 
			this->btnRechercherEmploye->Location = System::Drawing::Point(100, 329);
			this->btnRechercherEmploye->Name = L"btnRechercherEmploye";
			this->btnRechercherEmploye->Size = System::Drawing::Size(104, 24);
			this->btnRechercherEmploye->TabIndex = 26;
			this->btnRechercherEmploye->Text = L"Rechercher ";
			this->btnRechercherEmploye->Click += gcnew System::EventHandler(this, &MyForm::btnRechercherEmploye_Click);
			// 
			// btnAjoutEmploye
			// 
			this->btnAjoutEmploye->Location = System::Drawing::Point(100, 290);
			this->btnAjoutEmploye->Name = L"btnAjoutEmploye";
			this->btnAjoutEmploye->Size = System::Drawing::Size(104, 24);
			this->btnAjoutEmploye->TabIndex = 25;
			this->btnAjoutEmploye->Text = L"Ajouter";
			this->btnAjoutEmploye->Click += gcnew System::EventHandler(this, &MyForm::btnAjoutEmploye_Click);
			// 
			// txtVille
			// 
			this->txtVille->Location = System::Drawing::Point(100, 140);
			this->txtVille->Name = L"txtVille";
			this->txtVille->Size = System::Drawing::Size(104, 20);
			this->txtVille->TabIndex = 24;
			// 
			// txtPrenom
			// 
			this->txtPrenom->Location = System::Drawing::Point(100, 96);
			this->txtPrenom->Name = L"txtPrenom";
			this->txtPrenom->Size = System::Drawing::Size(104, 20);
			this->txtPrenom->TabIndex = 23;
			// 
			// txtNom
			// 
			this->txtNom->Location = System::Drawing::Point(100, 52);
			this->txtNom->Name = L"txtNom";
			this->txtNom->Size = System::Drawing::Size(104, 20);
			this->txtNom->TabIndex = 22;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(392, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 13);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Duree";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(392, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 13);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Titre";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(392, 36);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 13);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Identifiant";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnRechercherTache
			// 
			this->btnRechercherTache->Location = System::Drawing::Point(396, 329);
			this->btnRechercherTache->Name = L"btnRechercherTache";
			this->btnRechercherTache->Size = System::Drawing::Size(104, 24);
			this->btnRechercherTache->TabIndex = 34;
			this->btnRechercherTache->Text = L"Rechercher ";
			this->btnRechercherTache->Click += gcnew System::EventHandler(this, &MyForm::btnRechercherTache_Click);
			// 
			// btnAjouterTache
			// 
			this->btnAjouterTache->Location = System::Drawing::Point(396, 290);
			this->btnAjouterTache->Name = L"btnAjouterTache";
			this->btnAjouterTache->Size = System::Drawing::Size(104, 24);
			this->btnAjouterTache->TabIndex = 33;
			this->btnAjouterTache->Text = L"Ajouter";
			this->btnAjouterTache->Click += gcnew System::EventHandler(this, &MyForm::btnAjouterTache_Click);
			// 
			// txtDuree
			// 
			this->txtDuree->Location = System::Drawing::Point(395, 140);
			this->txtDuree->Name = L"txtDuree";
			this->txtDuree->Size = System::Drawing::Size(104, 20);
			this->txtDuree->TabIndex = 32;
			// 
			// txtTitre
			// 
			this->txtTitre->Location = System::Drawing::Point(395, 96);
			this->txtTitre->Name = L"txtTitre";
			this->txtTitre->Size = System::Drawing::Size(104, 20);
			this->txtTitre->TabIndex = 31;
			// 
			// txtIdentifiant
			// 
			this->txtIdentifiant->Location = System::Drawing::Point(395, 52);
			this->txtIdentifiant->Name = L"txtIdentifiant";
			this->txtIdentifiant->Size = System::Drawing::Size(104, 20);
			this->txtIdentifiant->TabIndex = 30;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(97, 217);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(107, 13);
			this->label7->TabIndex = 41;
			this->label7->Text = L"Numéro";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(97, 173);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 13);
			this->label8->TabIndex = 40;
			this->label8->Text = L"NAS";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// txtNumero
			// 
			this->txtNumero->Location = System::Drawing::Point(100, 233);
			this->txtNumero->Name = L"txtNumero";
			this->txtNumero->Size = System::Drawing::Size(104, 20);
			this->txtNumero->TabIndex = 39;
			// 
			// txtNas
			// 
			this->txtNas->Location = System::Drawing::Point(100, 189);
			this->txtNas->Name = L"txtNas";
			this->txtNas->Size = System::Drawing::Size(104, 20);
			this->txtNas->TabIndex = 38;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(27, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(107, 27);
			this->label9->TabIndex = 42;
			this->label9->Text = L"Employés";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(392, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(107, 27);
			this->label10->TabIndex = 43;
			this->label10->Text = L"Tâches";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(393, 173);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(107, 13);
			this->label11->TabIndex = 45;
			this->label11->Text = L"Etat avancement";
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// txtEtat
			// 
			this->txtEtat->Location = System::Drawing::Point(396, 189);
			this->txtEtat->Name = L"txtEtat";
			this->txtEtat->Size = System::Drawing::Size(104, 20);
			this->txtEtat->TabIndex = 44;
			// 
			// txtMesure
			// 
			this->txtMesure->Location = System::Drawing::Point(505, 140);
			this->txtMesure->Name = L"txtMesure";
			this->txtMesure->Size = System::Drawing::Size(104, 20);
			this->txtMesure->TabIndex = 46;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(740, 416);
			this->Controls->Add(this->txtMesure);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtEtat);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtNumero);
			this->Controls->Add(this->txtNas);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btnRechercherTache);
			this->Controls->Add(this->btnAjouterTache);
			this->Controls->Add(this->txtDuree);
			this->Controls->Add(this->txtTitre);
			this->Controls->Add(this->txtIdentifiant);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnRechercherEmploye);
			this->Controls->Add(this->btnAjoutEmploye);
			this->Controls->Add(this->txtVille);
			this->Controls->Add(this->txtPrenom);
			this->Controls->Add(this->txtNom);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAjoutEmploye_Click(System::Object^  sender, System::EventArgs^  e) {
		Employe employeCourant;

		ViderZonesTexteEmploye();
	}

	void ViderZonesTexteEmploye()
	{
		txtNom->Text = "";
		txtPrenom->Text = "";
		txtVille->Text = "";
		txtNas->Text = "";
		txtNumero->Text = "";
	}

	private: System::Void btnRechercherEmploye_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void btnAjouterTache_Click(System::Object^  sender, System::EventArgs^  e) {
		Tache tacheCourante;

		ViderZonesTexteTache();
	}

	void ViderZonesTexteTache()
	{
		txtIdentifiant->Text = "";
		txtTitre->Text = "";
		txtDuree->Text = "";
		txtMesure->Text = "";
		txtEtat->Text = "";
	}

	private: System::Void btnRechercherTache_Click(System::Object^  sender, System::EventArgs^  e) {
	}

};
}
