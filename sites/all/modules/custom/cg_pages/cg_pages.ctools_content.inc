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
  $content->name = 'hero';
  $content->admin_title = 'hero';
  $content->admin_description = '';
  $content->category = 'Homepage';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '        <h2 class="overlay">Lorem ipsum dolor sit amet consectetur adipiscing elit sed do eiusmod</h2>
    	<a id="give-forward" class="overlay" href="">
    		<img src="sites/all/themes/cg_theme/images/button-givefwd.png" />
    	</a>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['hero'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'one_action_continuous_good';
  $content->admin_title = 'One action continuous good';
  $content->admin_description = 'One action continuous good custom content pane.';
  $content->category = 'Homepage';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'One action, Continuous Good',
    'body' => '<div class="step-blocks">
            <div class="step-block" id="causes">
                <div class="bg-container">
                    <img class="step-inner" src="sites/all/themes/cg_theme/images/circle-icon-check.jpg" />
                </div>
                <div class="inline-block">
                    <div class="num-container">
                        <p class="step-num">1</p>
                    </div>
                    <div class="text-container">
                        <p class="step-text">Choose Causes to Support.</p>
                    </div>
                </div>
            </div>
            <div class="step-block" id="amount">
                <div class="bg-container">
                    <img class="step-inner" src="sites/all/themes/cg_theme/images/circle-icon-cal.jpg" />
                </div>
                <div class="inline-block">
                    <div class="num-container">
                        <p class="step-num">2</p>
                    </div>
                    <div class="text-container">
                        <p class="step-text">Set Amounts and Frequency</p>
                    </div>
                </div>
            </div>
            <div class="step-block" id="enjoy">
                <div class="bg-container">
                    <img class="step-inner" src="sites/all/themes/cg_theme/images/circle-icon-heart.jpg" />
                </div>
                <div class="inline-block">
                    <div class="num-container">
                        <p class="step-num">3</p>
                    </div>
                    <div class="text-container">
                        <p class="step-text">Enjoy the continuous good you have done, and are doing.</p>
                    </div>
                </div>
            </div>
        </div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['one_action_continuous_good'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'step_one';
  $content->admin_title = 'step-one';
  $content->admin_description = '';
  $content->category = 'Homepage';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'Step 1',
    'body' => '        <div id="image-blocks">
            <!-- HTML for one of the image blocks, need to add the html for all of them -->
            <div class="img-block" id="img-block-1">
                <img src="http://az616578.vo.msecnd.net/files/2016/03/27/635946751428308757-759031149_classroom.jpg" height="200px" width="200px" />
                <div class="hover-container">
                    <p class="headline">Excepteur sint occaecat cupidatat non profit</p>
                    <p class="description">Lorem ipsum dolor sit amet consectetur adipisicing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam</p>
                </div>
            </div>
            <div class="img-block" id="img-block-2">
                <img src="http://az616578.vo.msecnd.net/files/2016/03/27/635946751428308757-759031149_classroom.jpg" />
                <div class="hover-container">
                    <p class="headline">Excepteur sint occaecat cupidatat non profit</p>
                    <p class="description">Lorem ipsum dolor sit amet consectetur adipisicing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam</p>
                </div>
            </div>
            <div class="img-block" id="img-block-3">
                <img src="http://az616578.vo.msecnd.net/files/2016/03/27/635946751428308757-759031149_classroom.jpg" />
                <div class="hover-container">
                    <p class="headline">Excepteur sint occaecat cupidatat non profit</p>
                    <p class="description">Lorem ipsum dolor sit amet consectetur adipisicing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam</p>
                </div>
            </div>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['step_one'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'step_three';
  $content->admin_title = 'step-three';
  $content->admin_description = '';
  $content->category = 'Homepage';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'Step 3',
    'body' => '<p class="description">Enjoy the continuous good you are doing</p>
        <div id="submit">
            <input class="submit" type="submit" name="submit">
        </div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['step_three'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'step_two';
  $content->admin_title = 'step-two';
  $content->admin_description = '';
  $content->category = 'Homepage';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'Step 2',
    'body' => '<div class="form">
            <p class="description">Lorem ipsum dolor sit amet consectetur adipisicing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam</p>
            <input type="text" name="amount">
            <select name="frequency">
                <option>Frequency</option>
            </select>
        </div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['step_two'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'subscribe';
  $content->admin_title = 'subscribe';
  $content->admin_description = '';
  $content->category = 'Homepage';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>Want to hear about new charities? 
        Stay in the loop!</p>
        <form>
            <input type="email" name="email">
            <input type="submit" name="Subscribe">
        </form>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['subscribe'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'testimonials';
  $content->admin_title = 'testimonials';
  $content->admin_description = '';
  $content->category = 'Homepage';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'Testimonials',
    'body' => '',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['testimonials'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'welcome_section';
  $content->admin_title = 'welcome-section';
  $content->admin_description = '';
  $content->category = 'Homepage';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>Welcome to <b>Continuous Good</b></p>
        <p class="description">Curabitur non nulla sit amet nisl tempus convallis quis ac lectus. Nulla quis lorem ut libero malesuada feugiat. Curabitur aliquet quam id dui posuere blandit. Praesent sapien massa, convallis a pellentesque nec, egestas non nisi. Nulla quis lorem ut libero malesuada feugiat. Vestibulum ac diam sit amet quam vehicula elementum sed sit amet dui. Vivamus magna justo, lacinia eget consectetur sed, convallis at tellus. Pellentesque in ipsum id orci porta dapibus. Vestibulum ac diam sit amet quam vehicula elementum sed sit amet dui. Praesent sapien massa, convallis a pellentesque nec, egestas non nisi.</p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['welcome_section'] = $content;

  return $export;
}
