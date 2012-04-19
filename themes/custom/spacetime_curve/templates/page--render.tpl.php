<!-- template page render template -->
<div class="element-hidden modal" data-trigger="<?php echo $_REQUEST['trigger']; ?>" id="node-<?php echo $node->nid; ?>">
  <div class="modal-header">
    <a class="close" data-dismiss="modal">×</a>
    <h3><?php print $title; ?></h3>
  </div>
  <div class="modal-body">
  <?php print render($page['content']); ?>
  </div>
<!--
  this isn't working
  <div class="modal-footer">
    <a href="#" class="btn">Close</a>
  </div>
-->
</div>

