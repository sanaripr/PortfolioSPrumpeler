<template>
  <div class="buasIntake">
    <router-link to="/" class="terug-knop">Terug naar Home</router-link>
    <br /><br /><br />
    
    <h1>BUas</h1>
    <img class="logoB" src="images/C++/Buas.png" alt="Logo" />

    <div class="text-block">
      <h2>Intake opdracht BUas</h2>
      <p>
        Voor de opleiding Creative Media and Game Technologies (CMGT) aan Breda University of Applied Sciences (BUas) 
        is het verplicht om een intakeopdracht te maken als onderdeel van het toelatingsproces. 
        Deze opdracht is bedoeld om te laten zien wat je motivatie is, welke vaardigheden je al beheerst 
        en of je geschikt bent voor de studie.
        Omdat ik erg gemotiveerd ben om deze opleiding te volgen, ben ik ruim van tevoren begonnen met de voorbereiding. 
        Eén van de onderdelen van de intakeopdracht is het maken van een eigen game of technisch project. 
        Daarom ben ik aan de slag gegaan met het programmeren van een game in C++.
      </p>
    </div>
    <br />
    <br />

    <div class="text-block">
      <h2>Mijn Clicker Game – Zelf Gemaakt in C++</h2>
      <p>
        Voor mijn intakeopdracht heb ik een clicker game ontwikkeld in C++, waarin je grondstoffen verzamelt, 
        verkoopt en je productie automatiseert met workers. Het spel bevat strategische keuzes, een eenvoudig 
        economisch systeem en progressie via upgrades.
      </p>

      <h2>Speluitleg</h2>
      <ol>
        <li>
          <strong>Kies je specialisatie</strong><br />
          Bij het begin van het spel kies je een skill:<br />
          <em>Mine</em> → je specialiseert in steen.<br />
          <em>Forrest</em> → je specialiseert in hout.<br />
          Deze keuze bepaalt wat je bij het klikken méér verdient:<br />
          Mine: 2 steen + 1 hout per actie.<br />
          Forrest: 2 hout + 1 steen per actie.
        </li>
        <br />
        <li>
          <strong>Grondstoffen verzamelen</strong><br />
          Je kunt daarna klikken om hout te hakken of steen te minen.<br />
          Na 4 klikken ontvang je:<br />
          20 van je hoofdmateriaal (afhankelijk van je skill).<br />
          10 van het andere materiaal.<br />
          <em>Voorbeeld:</em> Als je “Mine” hebt gekozen, krijg je na 4 klikken → 20 steen en 10 hout.
        </li>
        <br />
        <li>
          <strong>Grondstoffen verkopen</strong><br />
          De verzamelde hout en steen kun je verkopen voor coins.<br />
          Deze coins gebruik je om je productie verder uit te breiden.
        </li>
        <br />
        <li>
          <strong>Koop en upgrade workers</strong><br />
          Met je coins kun je workers inhuren die automatisch hout hakken of steen minen:<br />
          Workers werken zelfstandig, zelfs als je niet klikt.<br />
          Je kunt ze upgraden, waardoor ze sneller werken en meer opleveren.
        </li>
      </ol>
    </div>
    <br />
    <br />
    <br />

    <div class="text-block">
      <h2>Wat zijn abstracte klassen in C++?</h2>
      <p>
        Een <strong>abstracte klasse</strong> in C++ is een klasse die niet direct gebruikt kan worden om een object van te maken. 
        In plaats daarvan dient een abstracte klasse als basis voor andere klassen. Dit doe je door minstens één functie in de klasse te markeren als een 
        <em>pure virtual functie</em> met <code>= 0</code>. Hierdoor moeten alle afgeleide klassen deze functie implementeren.
      </p>
      <p>
        Bijvoorbeeld:
      </p>
      <pre><code>
  class GameObject {
  public:
      virtual void update() = 0; // Pure virtual functie
  };
      </code></pre>
      <p>
        Een subklasse die van <code>GameObject</code> erft, moet zelf een <code>update()</code> functie schrijven. 
        Dit zorgt ervoor dat alle objecten van afgeleide klassen een eigen gedrag voor <code>update()</code> hebben. 
        Abstracte klassen zijn belangrijk voor het gebruik van <strong>polymorfisme</strong> in C++.
      </p>
    </div>
    <br />

    <h2>Screenshots intake opdracht</h2>
    <img class="cpp" src="images/C++/Button.CPP.png" alt="Cplusplus" />
    <img class="cpp" src="images/C++/Resources.CPP.png" alt="Cplusplus" />
    <img class="cpp" src="images/C++/Game.CPP.png" alt="Cplusplus" />
    
          <p>
        game.cpp:
      </p>
      <pre><code>
#include "precomp.h"
#include "game.h"
#include "Player.h"
#include "Button.h"
#include "Game_Main_Loop.h"
#include "resource.h"
#include "StartScreen.h"

extern GLFWwindow* window;

void Game::Init()
{
  m_Player = new Player;
  m_Button = new Button;
  m_Game_Main_Loop = new Game_Main_Loop;
  m_Resource = new resource;
  m_StartScreen = new StartScreen;
}


void Game::Tick(float deltaTime)
{
  screen->Clear(0);
  m_Player->set_Player_Pos();

  screen->Line(220, 0, 220, 720, 0xff00ff);
  screen->Line(0, 115, 1090, 115, 0xff00ff);
  screen->Line(220, 605, 1090, 605, 0xff00ff);
  screen->Line(1090, 0, 1090, 720, 0xff00ff);

  m_Button->Button_standard("Start", (1280 / 2) - 150, 625, screen);
  m_Button->Button_standard("Quit", (1280 / 2) + 50, 625, screen);

  // als startscreen true is doe alles hier onder
  if (m_StartScreen->get_StartScreen_Loop() == true)
  {
    //quit
    if (m_Player->check_Pressed_Standerd((1280 / 2) + 50, 625) == true)
    {
      exit(0);
    }

    //start
    if (m_Player->check_Pressed_Standerd((1280 / 2) - 150, 625) == true &&
      m_Player->get_Player_WoodCutting() >= 1 &&
      m_Player->get_Player_Mining() >= 1)
    {
      // startscreen to false
      m_StartScreen->set_StartScreen_Active(false);
      m_Game_Main_Loop->set_Game_Main_Loop_Active(true);
    }

    //coins + skills
    screen->Print("Choose your Skill to start:", (1280 / 2) + 475, (720 / 2) - 100, 0xFFff00);
    m_Button->Button_standard("Wood cutting skill", (1280 / 2) + 470, (720 / 2) - 85, screen);
    m_Button->Button_standard("Mining skill", (1280 / 2) + 470, (720 / 2) + 10, screen);

    if (m_Player->check_Pressed_Standerd((1280 / 2) + 470, (720 / 2) - 85))
    {
      m_Player->set_Player_Skills(2, 1);
      screen->Print("Cut wood, than set it for coins :)", (1280 / 2) - 100, 350, 0XFFff00);
    }

    if (m_Player->check_Pressed_Standerd((1280 / 2) + 470, (720 / 2) + 10))
    {
      m_Player->set_Player_Skills(1, 2);
      screen->Print("Mine to get stones, than sell them for coins :)", (1280 / 2) - 100, 350, 0XFFff00);
    }
    // tot hier

  }



  /// game + skill
  if (m_Game_Main_Loop->get_Game_Main_Loop() == true)
  {
    screen->Clear(0);

    screen->Line(220, 0, 220, 720, 0xff00ff);
    screen->Line(0, 115, 1090, 115, 0xff00ff);
    screen->Line(220, 605, 1090, 605, 0xff00ff);
    screen->Line(1090, 0, 1090, 720, 0xff00ff);

    screen->Print("Clicky Click", (1280 / 2) - 8, 60, 0x00ffFF);

    screen->Print("wood", 70, 30, 0xD1B18A);
    string woodAmount = to_string(m_Resource->get_Wood_Amount());
    screen->Print(woodAmount.c_str(), 105, 30, 0xD1B18A);

    screen->Print("stone", 70, 50, 0xd3D3D3);

    string stoneAmount = to_string(m_Resource->get_Stone_Amount());
    screen->Print(stoneAmount.c_str(), 105, 50, 0xd3D3D3);

    screen->Print("Coins", 70, 80, 0xFFDB58);
    string coinsAmount = to_string(m_Resource->get_Coins_Amount());
    screen->Print(coinsAmount.c_str(), 105, 80, 0xFFDB58);




    m_Button->Button_standard("Forest", (1280 / 2) + 470, (720 / 2) - 85, screen);
    if (m_Player->check_Pressed_Standerd((1280 / 2) + 470, (720 / 2) - 85) == true)
    {
      m_Game_Main_Loop->set_Forest_Screen_Active(true);
      m_Game_Main_Loop->set_Mine_Screen_Active(false);
      m_Game_Main_Loop->set_Market_Screen_Active(false);
    }

    m_Button->Button_standard("Mine", (1280 / 2) + 470, (720 / 2) + 10, screen);
    if (m_Player->check_Pressed_Standerd((1280 / 2) + 470, (720 / 2) + 10) == true)
    {
      m_Game_Main_Loop->set_Forest_Screen_Active(false);
      m_Game_Main_Loop->set_Mine_Screen_Active(true);
      m_Game_Main_Loop->set_Market_Screen_Active(false);

    }

    m_Button->Button_standard("Market", (1280 / 2) + 470, (720 / 2) + 150, screen);
    if (m_Player->check_Pressed_Standerd((1280 / 2) + 470, (720 / 2) + 150) == true)
    {
      m_Game_Main_Loop->set_Forest_Screen_Active(false);
      m_Game_Main_Loop->set_Mine_Screen_Active(false);
      m_Game_Main_Loop->set_Market_Screen_Active(true);

    }





    //Forest Button Click
    if (m_Game_Main_Loop->get_Forest_Screen() == true)
    {
      m_Button->Button_standard("Chop trees", (1280 / 2) - 400, (720 / 2) - 225, screen);
      if (m_Player->check_Pressed_Standerd((1280 / 2) - 400, (720 / 2) - 225) && glfwGetMouseButton
          (window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS && !Pressed)
      {
        m_Resource->set_Wood_Amount(m_Resource->get_Wood_Amount() + m_Player->get_Player_WoodCutting());
        Pressed = true;
      }
      if (Pressed == true)
      {
        screen->Box((1280 / 2) - 400, (720 / 2) - 225, (1280 / 2) - 400 + 150, (720 / 2) - 225 + 75, 0x0000FF);
      }
      if (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_RELEASE)
      {
        Pressed = false;
      }
    }




    //Mine Button Click
    if (m_Game_Main_Loop->get_Mine_Screen() == true)
    {
      m_Button->Button_standard("Mine stone", (1280 / 2) - 400, (720 / 2) - 225, screen);
      if (m_Player->check_Pressed_Standerd((1280 / 2) - 400, (720 / 2) - 225) && glfwGetMouseButton
          (window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS && !Pressed)
      {
        m_Resource->set_Stone_Amount(m_Resource->get_Stone_Amount() + m_Player->get_Player_Mining());
        Pressed = true;
      }
      if (Pressed == true)
      {
        screen->Box((1280 / 2) - 400, (720 / 2) - 225, (1280 / 2) - 400 + 150, (720 / 2) - 225 + 75, 0x0000FF);
      }
      if (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_RELEASE)
      {
        Pressed = false;
      }
    }


    if (m_Game_Main_Loop->get_Market_Screen() == true)
    {
      ////Wood selling
      m_Button->Button_standard("Cash Out Wood", (1280 / 2) - 350, (720 / 2) - 200, screen);
        screen->Print("10x Wood = 1 coin", (1280 / 2) - 325, (720 / 2) - 215, 0xFFDB58);
    
      if (m_Player->check_Pressed_Standerd((1280 / 2) - 350, (720 / 2) - 200) &&
        glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS &&
        !Pressed)
      {
        if (m_Resource->get_Wood_Amount() >= 10)
        {
          m_Resource->set_Wood_Amount(m_Resource->get_Wood_Amount() - 10);
          m_Resource->set_Coins_Amount(m_Resource->get_Coins_Amount() + 1);
          Pressed = false;
        }
      }




      ////Stone Selling
      m_Button->Button_standard("Cash Out Stones", (1280 / 2) - 150, (720 / 2) - 200, screen);
        screen->Print("10x Stone = 1 coin", (1280 / 2) - 127, (720 / 2) - 215, 0xFFDB58);

      if (m_Player->check_Pressed_Standerd((1280 / 2) - 150, (720 / 2) - 200) &&
        glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS &&
        !Pressed)
      {
        if (m_Resource->get_Stone_Amount() >= 10)
        {
          m_Resource->set_Stone_Amount(m_Resource->get_Stone_Amount() - 10);
          m_Resource->set_Coins_Amount(m_Resource->get_Coins_Amount() + 1);
          Pressed = true;
        }
      }

    }

    //m_Button->Button_standard("Start", (1280 / 2) - 150, 500, screen);
    //m_Button->Button_standard("Quit", (1280 / 2) + 50, 500, screen);
  }

}
      </code></pre>

  </div>
</template>

<script>
export default {
  name: 'buasIntake',
};
</script>

<style scoped>
.buasIntake {
  color: white;
  padding: 40px;
  max-width: 900px;
  margin: 0 auto;
  font-family: sans-serif;
}

h1 {
  margin-bottom: 20px;
  color: #ffcad4;
}

h2 {
  margin-top: 30px;
  margin-bottom: 10px;
  color: #ffd6e0;
}

a {
  color: #ffd6e0;
  text-decoration: underline;
}

.text-block {
  margin-top: -50px;
  margin-bottom: 30px;
  line-height: 1.6;
}

.logoB{
  max-width: 350px;
  height: auto;
  border-radius: 50%;
  margin-left: -20px;
  margin-top: -150px;
}

.cpp {
  border-radius: 8px;
  width: 900px;
}

.terug-knop {
  display: inline-block;
  margin-left: -250px;
  padding: 12px 24px;
  background-color: #76273a;
  color: white;
  border-radius: 8px;
  text-decoration: none;
  font-weight: bold;
  transition: background-color 0.2s ease;
}

.terug-knop:hover {
  background: transparent;
  border: 2px solid #bb657a;
}

pre {
  background-color: #333;
  padding: 10px;
  border-radius: 8px;
  color: #ffd6e0;
  overflow-x: auto;
}
</style>
