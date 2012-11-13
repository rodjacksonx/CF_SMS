<?php

/**
 * @file
 * Contains the functions for the default, included CallFire SMS response features
 *
 * @creation November 2012
 * @author Rod Jackson (RDJ)
 */
 

//define ('CALLFIRE_WEBSITE', "https://callfire.com");


/**
 * Settings form for the CallFire SMS module.
 */
/*function cf_sms_settings() {

	global $base_url;

	$form = array();

	$form['cf_sms_debug_mode'] = array(
		'#type' => 'radios',
		'#title' => t('Debug mode activation'),
		'#options' => array(
			0 => t('Allow anyone to sign up for SMS features.'),
			1 => t('Only allow admins to sign up for SMS features.')
		),
		'#default_value' => variable_get('cf_sms_debug_mode', 0),
    '#summary' => variable_get('cf_sms_debug_mode' ,0) ?
			t('Debug mode is OFF: anyone can sign up for SMS features.') :
			t('Debug mode is ON: only admins can sign up for SMS features.');
		'#description' => t('This allows restricting SMS signup to only site administrators, primarily for testing and/or debugging purposes.'),
	);
	$form['cf_sms_signup_message'] = array(
		'#type' => 'textfield',
		'#title' => t('SMS signup message'),
		'#default_value' => variable_get('cf_sms_signup_message', CF_SMS_SIGNUP_MESSAGE),
		'#summary' => t('Current message to use to prompt users to sign up for SMS features:') .
			'<br />' . variable_get('cf_sms_signup_message', CF_SMS_SIGNUP_MESSAGE);
		'#description' =>
			t('Message to display to prompt users to sign up for SMS features.'),
	);

	return $form;
}
*/

