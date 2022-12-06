import React from 'react';
import Categories from '../../components/Categories/Categories.jsx';
import Contact from '../../components/Contact/Contact.jsx';
import FeaturedProducts from '../../components/FeatureProducts/FeaturedProducts.jsx';
import Slider from '../../components/Slider/Slider.jsx';
import './Home.scss';

const Home = () => {
  return (
    <div className='home'>
      <Slider />
      <FeaturedProducts type='featured' />
      <Categories />
      <FeaturedProducts type='trending' />
      <Contact />
    </div>
  );
}

export default Home;
