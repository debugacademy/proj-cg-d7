<?php
/**
 * @file
 * cg_pages.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function cg_pages_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'homepage';
  $content->admin_title = 'Hero';
  $content->admin_description = '';
  $content->category = 'Homepage';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<section id="hero">
  <div class ="content-narrow">   
  <h2>Lorem ipsum dolor sit amet consectetur adipiscing elit sed do eiusmod</h2>
    	<a href="#">
    		<img src="sites/all/themes/cg_theme/images/button-givefwd.png">
    	</a>
  </div>
 <div class="content">
</section>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['homepage'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'one_action_continuous_good';
  $content->admin_title = 'One action continuous good';
  $content->admin_description = 'One action continuous good custom content pane.';
  $content->category = 'Homepage';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<section id="section-one">
    <div class="content-narrow">
      <h3>One action, continuous good</h3>
      <div class="step-blocks">
        <div class="step-block" id="causes">
          <div class="bg-container">
            <img class="step-inner" src="sites/all/themes/cg_theme/images/circle-icon-check.jpg" />
          </div>
          <div class="step">
            <p class="step-right">1</p>
            <p class="step-left">Choose Causes to Support.</p>
          </div>
        </div>
        <div class="step-block" id="amount">
          <div class="bg-container">
            <img class="step-inner" src="sites/all/themes/cg_theme/images/circle-icon-cal.jpg" />
          </div>
          <div class="step">
            <p class="step-right">2</p>
            <p class="step-left">Set Amount and Frequency.</p>
          </div>
        </div>
        <div class="step-block" id="enjoy">
          <div class="bg-container">
            <img class="step-inner" src="sites/all/themes/cg_theme/images/circle-icon-heart.jpg" />
          </div>
          <div class="step">
            <p class="step-right">3</p>
            <p class="step-left">Enjoy the continuous good you have done, and are doing.</p>
          </div>
        </div>
      </div>
    </div>
  </section>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['one_action_continuous_good'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'step_1';
  $content->admin_title = 'Step 1';
  $content->admin_description = '';
  $content->category = 'Homepage';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<section id="section-three">
<div class="content-narrow">
        <h3>Step 1</h3>
        <div id="image-blocks">
            <!-- HTML for one of the image blocks, need to add the html for all of them -->
            <div class="img-block" id="img-block-1">
                <img src="http://az616578.vo.msecnd.net/files/2016/03/27/635946751428308757-759031149_classroom.jpg" />
                <div class="hover-container">
                    <p class="headline">Excepteur sint occaecat cupidatat non profit</p>
                    <p class="description">Lorem ipsum dolor sit amet consectetur adipisicing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam</p>
                </div>
            </div>
<div class="img-block" id="img-block-1">
                <img src="http://az616578.vo.msecnd.net/files/2016/03/27/635946751428308757-759031149_classroom.jpg" />
                <div class="hover-container">
                    <p class="headline">Excepteur sint occaecat cupidatat non profit</p>
                    <p class="description">Lorem ipsum dolor sit amet consectetur adipisicing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam</p>
                </div>
            </div>
<div class="img-block" id="img-block-1">
                <img src="http://az616578.vo.msecnd.net/files/2016/03/27/635946751428308757-759031149_classroom.jpg" />
                <div class="hover-container">
                    <p class="headline">Excepteur sint occaecat cupidatat non profit</p>
                    <p class="description">Lorem ipsum dolor sit amet consectetur adipisicing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam</p>
                </div>
            </div>
<div class="img-block" id="img-block-1">
                <img src="http://az616578.vo.msecnd.net/files/2016/03/27/635946751428308757-759031149_classroom.jpg" />
                <div class="hover-container">
                    <p class="headline">Excepteur sint occaecat cupidatat non profit</p>
                    <p class="description">Lorem ipsum dolor sit amet consectetur adipisicing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam</p>
                </div>
            </div>
<div class="img-block" id="img-block-1">
                <img src="http://az616578.vo.msecnd.net/files/2016/03/27/635946751428308757-759031149_classroom.jpg" />
                <div class="hover-container">
                    <p class="headline">Excepteur sint occaecat cupidatat non profit</p>
                    <p class="description">Lorem ipsum dolor sit amet consectetur adipisicing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam</p>
                </div>
            </div>
<div class="img-block" id="img-block-1">
                <img src="http://az616578.vo.msecnd.net/files/2016/03/27/635946751428308757-759031149_classroom.jpg" />
                <div class="hover-container">
                    <p class="headline">Excepteur sint occaecat cupidatat non profit</p>
                    <p class="description">Lorem ipsum dolor sit amet consectetur adipisicing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam</p>
                </div>
            </div>
<div class="img-block" id="img-block-1">
                <img src="http://az616578.vo.msecnd.net/files/2016/03/27/635946751428308757-759031149_classroom.jpg" />
                <div class="hover-container">
                    <p class="headline">Excepteur sint occaecat cupidatat non profit</p>
                    <p class="description">Lorem ipsum dolor sit amet consectetur adipisicing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam</p>
                </div>
            </div>
<div class="img-block" id="img-block-1">
                <img src="http://az616578.vo.msecnd.net/files/2016/03/27/635946751428308757-759031149_classroom.jpg" />
                <div class="hover-container">
                    <p class="headline">Excepteur sint occaecat cupidatat non profit</p>
                    <p class="description">Lorem ipsum dolor sit amet consectetur adipisicing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam</p>
                </div>
            </div>
        </div>
</div>
    </section>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['step_1'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'step_2';
  $content->admin_title = 'Step 2';
  $content->admin_description = '';
  $content->category = 'Homepage';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<section id="section-four">
      <div class="content-narrow">
        <h3>Step 2</h3>
        <!-- Need to add remaining HTML for this section -->
        <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla molestie ex eu magna dapibus, id consequat quam malesuada. Ut vel interdum sapien. In eu tempor neque. Phasellus eleifend urna in erat suscipit, nec ullamcorper nisl euismod. Cras ornare malesuada nisi, non semper tortor vestibulum faucibus. Nullam sit amet ligula scelerisque, tincidunt risus non, interdum ligula. </p>
        <form action="/" method="post">
          <div class="form-div">
            <input type="text" name="amount" value="Amount">
            <select class="input-value">
              <option value="1">Frequency</option>
              <option value="2">Frequency2</option>
              <option value="3">Frequency3</option>
            </select>
          </div>
        </form>
      </div>
    </section>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['step_2'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'step_3';
  $content->admin_title = 'Step 3';
  $content->admin_description = '';
  $content->category = 'Homepage';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<section id="section-six">
      <div class="content-narrow">
        <h3>Step 3</h3>
        <p>Enjoy the continuous good you are doing</p>
        <button>Submit</button>
      </div>
    </section>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['step_3'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'testimonials';
  $content->admin_title = 'Testimonials';
  $content->admin_description = '';
  $content->category = 'Homepage';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<section id="section-five">
      <div class="content-narrow">
        <div class="testimonials">
          <img class="testimonials-images" img src="http://www.colemanphotographix.com/wp-content/uploads/CatherineWolfson-0030-PROOF-332x500.jpg" alt="">
          <p class="testimonials-details">
            I love Continuous good because it helps me find causes that are important to me and have a tangible impact. I feel like I\'m part of much bigger movement and family</p>
            <p class="testimonials-names"> Maria, NY</p>
            <p class="testimonials-type">Organization</p>
        </div>
        <div class="testimonials">
          <img class="testimonials-images" img src="https://thumbs.dreamstime.com/z/young-man-headshot-23083979.jpg" alt="">
          <p class="testimonials-details">
            I love Continuous good because it helps me find causes that are important to me and have a tangible impact. I feel like I\'m part of much bigger movement and family</p>
            <p class="testimonials-names"> Haroon S., Florida</p>
            <p class="testimonials-type">Donor</p>
        </div>
        <div class="testimonials">
          <img class="testimonials-images" img src="http://312elements.com/wp-content/uploads/2012/11/wicked.jpg" alt="">
          <p class="testimonials-details">
            I love Continuous good because it helps me find causes that are important to me and have a tangible impact. I feel like I\'m part of much bigger movement and family</p>
            <p class="testimonials-names"> Maria, NY</p>
            <p class="testimonials-type">Organization</p>
        </div>
      </div>
    </section>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['testimonials'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'welcome_to_continuous_good';
  $content->admin_title = 'Welcome to Continuous Good';
  $content->admin_description = '';
  $content->category = 'Homepage';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<section id="section-two">
    <div class="content-narrow">
      <h3>Welcome <span class="green-text">to</span> <strong>Continuous Good</strong></h3>
      <p>Curabitur non nulla sit amet nisl tempus convallis quis ac lectus. Nulla quis lorem ut libero malesuada feugiat. Curabitur aliquet quam id dui posuere blandit. Praesent sapien massa, convallis a pellentesque nec, egestas non nisi. Nulla quis lorem ut libero malesuada feugiat. Vestibulum ac diam sit amet quam vehicula elementum sed sit amet dui. Vivamus magna justo, lacinia eget consectetur sed, convallis at tellus. Pellentesque in ipsum id orci porta dapibus. Vestibulum ac diam sit amet quam vehicula elementum sed sit amet dui. Praesent sapien massa, convallis a pellentesque nec, egestas non nisi.</p>
    </div>
  </section>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['welcome_to_continuous_good'] = $content;

  return $export;
}
