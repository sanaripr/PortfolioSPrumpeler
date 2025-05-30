<template>
  <div class="page-W1">
    <router-link to="/" class="terug-knop">Terug naar Home</router-link>

    <h1>B1-K1-W3</h1>

    <!-- W1 -->
    <section class="text-block">
      <h2>Gerealiseerde functionaliteit</h2>
      <p>Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> Er is voldoende inhoud van de functionaliteit gereageerd binnen de gestelde/geplande tijd.
      </p>

      <img src="" alt="Mail van Mike" />
    </section>
        <br />

    <!-- W2 -->
    <section class="text-block">
      <h2>Kwaliteit opgeleverde functionaliteiten</h2>
      <p>Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> De opgeleverde functionaliteiten voldoen aan de eisen en wensen.
      </p>
      <ul>
        <li><a href="https://trello.com/b/8T3gzD7w/portfolio-chirs" target="_blank">Trello Board | ChrisPortfolio</a></li>
        <li><a href="https://trello.com/b/wXNOVcTn/kembit" target="_blank">Trello Board | The KEMBIT Times 1.0</a></li>
      </ul>
      <ul class="inline-list">
        <li>
            <video controls style="width: 100%; max-width: 800px; margin-top: 10px;">
              <source src="/images/Code/ChrisPortfolio1.0.mp4" type="video/mp4" />
            </video>
        </li>
        <li>
            <video controls style="width: 100%; max-width: 800px; margin-top: 10px;">
              <source src="/images/Code/Kembit1.0.mp4" type="video/mp4" />
            </video>
        </li>
        <li><img src="/images/WebKembit/RegistreerLK1.png" alt="Website-RestultaatK2" /></li>
        <li><img src="/images/WebKembit/SubK1.png" alt="Website-RestultaatK2" /></li>
      </ul>
    </section>
        <br />


        
    <!-- W5 -->
    <section class="text-block">
      <h2>Kwaliteit opgeleverde functionaliteiten</h2>
        <p>Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> De opgeleverde functionaliteiten voldoen aan de eisen en wensen.
      </p>
      <ul class="inline-list">
        <img class="large-img" src="/images/Code/CodeChrisFO.png" alt="Code commentaar 1"/>
        <img class="mudium-img" src="/images/Code/MappenStructuurG.png" alt="Code commentaar 2"/>
        <img src="/images/Code/MappenStructuurF.png" alt="Code commentaar 3"/>
       </ul> 
    </section>




    <!-- W3 -->
    <section class="text-block">
      <h2>Kwaliteit code</h2>
      <p>Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> De Kwaliteit van de code is goed.
      </p>
      <ul class="inline-list1">
            <h2>Foute code</h2>
        <li><img src="/images/Code/SlechteCodeCP1.1.png" alt="Slechte Code" /></li>
             <h2>Foute code</h2>
        <li><img src="/images/Code/SlechteCodeCP1.2.png" alt="Slechte Code" /></li>
      </ul>
<br />
      <ul class="inline-list2">
              <h2>Goede code</h2>
        <li><img src="/images/Code/GoedeCodeCP1.1.png" alt="Goede Code" /></li>
              <h2>Goede code</h2>
        <li><img src="/images/Code/GoedeCodeCP1.2.png" alt="Goede Code" /></li>
      </ul>
        <br />
      <ul>
      <h3>Linter zoals ESLint en Stylelint zijn gebruikt om consistentie te waarborgen.</h3>
      </ul>
      <ul class="inline-list">
        <li><img class="large-img" src="/images/Code/Linting1.png" alt="Linting voorbeeld" /></li>
      </ul>
    </section>
    <br />

    <!-- W4 -->
    <section class="text-block">
      <h2>Versiebeheer</h2>
      <p>Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> Versiebeheer is effectief toegepast.
      </p>


      <ul class="inline-list">
        <li><img class="large-img" src="/images/Code/Beheer.png" alt="Beheer code" /></li>
        <li><img class="large-img" src="/images/Code/GitKraken.VS.Test.png" alt="GitKraken voorbeeld 1" /></li>
        <li><img class="large-img" src="/images/Code/GitKraken.newsui.png" alt="GitKraken voorbeeld 2" /></li>
        <li><img class="large-img" src="/images/Code/Azure.Pull.png" alt="Git commit geschiedenis" /></li>
        <li><img class="large-img" src="/images/Code/azure.push.png" alt="Backup voorbeeld" /></li>
      </ul>
    </section>
        <br />


  </div>
</template>

<style>
.page-W1 {
  color: white;
  padding: 40px;
  font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
  max-width: 1000px;
  margin: 0 auto;
}

h1 {
  color: #ffd6e0;
  margin-bottom: 30px;
  font-size: 28px;
}

h2 {
  margin-top: 30px;
  margin-bottom: -10px;
  color: #ffcad4;
  font-size: 20px;
}

h3 {
  margin-top: 20px;
  color: #ffa3b1;
  font-size: 18px;
  text-align: center;
}

.text-block {
  margin-bottom: 40px;
  line-height: 1.6;
}

ul {
  margin-left: 20px;
  list-style-type: disc;
}

.inline-list,
.inline-list1,
.inline-list2 {
  display: flex;
  gap: 15px;
  padding-left: 0;
  list-style: none;
  justify-content: center;
  flex-wrap: wrap;
}

.inline-list,
.inline-list1 li,
.inline-list2 li {
  margin-left: 0;
}


.inline-list1 li img,
.inline-list2 li img {
  max-width: 1200px !important;
  width: 100%;
  height: auto;
  object-fit: contain;
  border-radius: 6px;
  display: block;
  transition: none !important;
  transform: none !important;
  pointer-events: none;
}

.inline-list1 li img:hover,
.inline-list2 li img:hover {
  transform: none !important;
  transition: none !important;
}

.text-block img,
.inline-list li img,
.inline-list1 li img,
.inline-list2 li img {
  border-radius: 6px;
  max-width: 100%;
  height: auto;
  display: block;
  object-fit: contain;
  max-width: 450px;
}

.text-block > img {
  max-width: 120px;
  margin-top: 10px;
}

.mudium-img {
  max-width: 650px !important;
  width: 100%;
  height: auto;
  object-fit: contain;
}

.large-img {
  max-width: 1000px !important;
  width: 100%;
  height: auto;
  object-fit: contain;
}

a {
  color: #ffd6e0;
  text-decoration: underline;
}

.terug-knop {
  display: inline-block;
  padding: 12px 24px;
  background-color: #76273a;
  color: white;
  border-radius: 8px;
  text-decoration: none;
  font-weight: bold;
  transition: background-color 0.2s ease;
  margin-bottom: 20px;
}

.terug-knop:hover {
  background: transparent;
  border: 2px solid #bb657a;
  color: #bb657a;
}
</style>
