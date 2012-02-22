<?php
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
/*
  kpr($variables);
  kpr($view);
  kpr($fields); 
*/
?>
<!-- template views view fields my entries -->
<tr>
  <td>#<?php echo $sid; ?></td>
  <td><?php echo $submitted; ?></td>
  <td><?php echo $title; ?></td>
  <td>
<?php
  if ( $payment_complete ):
?>
  Paid <?php echo $payment_date; ?><br />
<?php else: ?>

<form name="_xclick" action="https://www.paypal.com/cgi-bin/webscr" method="post" target="paypal">
<input type="hidden" name="cmd" value="_cart">
<input type="hidden" name="business" value="paypal@houseoflaudanum.com">
<input type="hidden" name="currency_code" value="AUD">
<input type="hidden" name="item_name" value="Entry fee #<?php echo $fields['sid']->raw; ?> @<?php echo $fields['name']->raw; ?>">
<input type="hidden" name="amount" value="35.00">
<input type="hidden" name="add" value="1">

<!--
<INPUT TYPE="hidden" NAME="first_name" VALUE="John">
<INPUT TYPE="hidden" NAME="last_name" VALUE="Doe">
<INPUT TYPE="hidden" NAME="address1" VALUE="9 Elm Street">
<INPUT TYPE="hidden" NAME="address2" VALUE="Apt 5">
<INPUT TYPE="hidden" NAME="city" VALUE="Berwyn">
<INPUT TYPE="hidden" NAME="state" VALUE="PA">
<INPUT TYPE="hidden" NAME="zip" VALUE="19312">
<INPUT TYPE="hidden" NAME="lc" VALUE="US">
-->

<INPUT TYPE="hidden" NAME="email" VALUE="<?php echo $fields['mail']->raw; ?>">

<input type="image" src="http://www.paypalobjects.com/en_US/i/btn/x-click-but22.gif" border="0" name="submit" width="87" height="23" alt="Make payments with PayPal - it's fast, free and secure!">
</form>

<?php endif; ?>
    <?php echo $draft; ?>
  </td>
  <td><?php echo $view_submission; ?> | <?php echo $edit_submission; ?></td>
</tr>
