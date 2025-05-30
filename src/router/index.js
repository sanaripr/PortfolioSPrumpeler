import { createRouter, createWebHistory } from 'vue-router';
import HomePage from '../views/home.vue';
import PageW1 from '../views/PageW1.vue';
import PageW2 from '../views/PageW2.vue';
import PageW3 from '../views/PageW3.vue';
import PageW4 from '../views/PageW4.vue';
import PageW5 from '../views/PageW5.vue';

import PageW6 from '../views/PageW6.vue';
import PageW7 from '../views/PageW7.vue';
import PageW8 from '../views/PageW8.vue';

import buasIntake from '../views/buasIn.vue';

const routes = [
  {
    path: '/',
    name: 'Home',
    component: HomePage
  },
  {
    path: '/pageW1',
    name: 'PageW1',
    component: PageW1
  },
  {
    path: '/pageW2',
    name: 'PageW2',
    component: PageW2
  },
  {
    path: '/pageW3',
    name: 'PageW3',
    component: PageW3
  },
  {
    path: '/pageW4',
    name: 'PageW4',
    component: PageW4
  },
  {
    path: '/pageW5',
    name: 'PageW5',
    component: PageW5
  },

  

    {
    path: '/pageW6',
    name: 'PageW6',
    component: PageW6
  },
  {
    path: '/pageW7',
    name: 'PageW7',
    component: PageW7
  },
  {
    path: '/pageW8',
    name: 'PageW8',
    component: PageW8
  },



  {
    path: '/buasIntake',
    name: 'buasIntake',
    component: buasIntake
  }
];

const router = createRouter({
  history: createWebHistory(process.env.BASE_URL),
  routes
});

export default router;
