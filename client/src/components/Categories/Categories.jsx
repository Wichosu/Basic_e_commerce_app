import React from 'react';
import './Categories.scss';
import {Link} from 'react-router-dom';

const Categories = () => {
  return (
    <div className='categories'>
      <div className='col'>
        <div className='row'>
          <img src='https://images.pexels.com/photos/1972115/pexels-photo-1972115.jpeg?auto=compress&cs=tinysrgb&w=1600' alt=''/>
          <Link className='link' to='products/1'>
            <button>Sale</button>
          </Link>
        </div>
        <div className='row'>
          <img src='https://images.pexels.com/photos/1972115/pexels-photo-1972115.jpeg?auto=compress&cs=tinysrgb&w=1600' alt=''/>
          <Link className='link' to='products/1'>
            <button>Sale</button>
          </Link>
        </div>
      </div>
      <div className='col'>
        <div className='row'>
          <img src='https://images.pexels.com/photos/1972115/pexels-photo-1972115.jpeg?auto=compress&cs=tinysrgb&w=1600' alt=''/>
          <Link className='link' to='products/1'>
            <button>Sale</button>
          </Link>
        </div>
      </div>
      <div className='col col-l'>
        <div className='row'>
          <div className='col'>
            <div className='row'>
              <img src='https://images.pexels.com/photos/1972115/pexels-photo-1972115.jpeg?auto=compress&cs=tinysrgb&w=1600' alt=''/>
              <Link className='link' to='products/1'>
                <button>Sale</button>
              </Link>
            </div>
          </div>
          <div className='col'>
            <div className='row'>
              <img src='https://images.pexels.com/photos/1972115/pexels-photo-1972115.jpeg?auto=compress&cs=tinysrgb&w=1600' alt=''/>
              <Link className='link' to='products/1'>
                <button>Sale</button>
              </Link>
            </div>
          </div>
        </div>
        <div className='row'>
          <img src='https://images.pexels.com/photos/1972115/pexels-photo-1972115.jpeg?auto=compress&cs=tinysrgb&w=1600' alt=''/>
          <Link className='link' to='products/1'>
            <button>Sale</button>
          </Link>
        </div>
      </div>
    </div>
  );
}

export default Categories;
